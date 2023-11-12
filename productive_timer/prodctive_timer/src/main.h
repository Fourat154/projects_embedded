#ifndef __MAIN__H 
#define __MAIN__H

#include "Arduino.h"

typedef enum
{
    IDLE,
    TIME_SET,
    COUNTDOWN, 
    PAUSE,
    STAT,

}protimer_state; 

typedef enum 
{
    EVENT_HANDLED, 
    EVENT_IGNORED,
    EVENT_TRANSITION,

}event_status_t ;
typedef enum
{
    INC_TIME,
    DEC_TIME,
    TIME_TICK,
    ENTRY,
    STATRT_PAUSE,
    EXIT,

}signal_t;


typedef struct  
{
    unsigned char sig ; 
}event_t ; 

typedef struct  
{
    event_t super ; 
}protimer_user_event_t;

typedef struct 
{
    event_t super ; 
    unsigned char ss;
}protimer_tick_event_t;

typedef struct 
{
    unsigned int curr_time ; 
    unsigned int elapsed_time ; 
    unsigned int prod_time ; 
    protimer_state active_state; 

}protimer_t;

void protimer_init(protimer_t *mobj );
event_status_t protimer_state_handler_idle( protimer_t * mobj , event_t * e ); 
event_status_t protimer_state_handler_pause( protimer_t * mobj , event_t * e ) ;
event_status_t protimer_state_handler_time_set( protimer_t * mobj , event_t * e );
event_status_t protimer_state_handler_countdown( protimer_t * mobj , event_t * e ) ;
event_status_t protimer_state_handler_stat( protimer_t * mobj , event_t * e ) ;


void display_time (unsigned int );
void  display_msg (String s );
void do_beep ();
void display_clear () ;

#endif
