/* 
 * File:   hal_ccp_cfg.h
 * Author: mm77
 *
 * Created on August 3, 2023, 10:41 AM
 */

#ifndef HAL_CCP_CFG_H
#define	HAL_CCP_CFG_H

#define CCP1_CFG_CAPTURE_MODE_SELECTED   0x00
#define CCP1_CFG_COMPARE_MODE_SELECTED   0x01
#define CCP_CFG_PWM_MODE_SELECTED       0x02

#define CCP1_CFG_SELECT_MODE_SELECTED   (CCP1_CFG_CAPTURE_MODE_SELECTED)
#define CCP2_CFG_SELECT_MODE_SELECTED   (CCP1_CFG_CAPTURE_MODE_SELECTED)

#endif	/* HAL_CCP_CFG_H */

