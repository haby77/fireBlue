/**
 ****************************************************************************************
 *
 * @file app_util.h
 *
 * @brief Application Utility functions
 *
 * Copyright (C) Quintic 2009-2012
 *
 * $Rev: $
 *
 ****************************************************************************************
 */

#ifndef _APP_UTIL_H_
#define _APP_UTIL_H_

/*
 * GLOBAL VARIABLE DECLARATIONS
 ****************************************************************************************
 */

/*
 * FUNCTION DECLARATIONS
 ****************************************************************************************
 */

/*
 ****************************************************************************************
 * @brief Compare if the two Bluetooth device address is same
 *
 ****************************************************************************************
 */
bool app_eaci_bd_addr_cmp(struct bd_addr *addr1, struct bd_addr *addr2);

/**
 ****************************************************************************************
 * @brief Set Bluetooth device address by paramer
 *
 ****************************************************************************************
 */
void app_eaci_set_bd_addr_by_param(uint8_t *pdu, uint8_t const *param);

/*
 ****************************************************************************************
 * @brief Get Bluetooth device address by paramer
 *
 ****************************************************************************************
 */
void app_eaci_get_bd_addr_by_param(struct bd_addr *addr, uint8_t const *param);

/*
 ****************************************************************************************
 * @brief Get free record index
 *
 ****************************************************************************************
 */
uint8_t app_eaci_get_free_rec_idx(void);

/*
 ****************************************************************************************
 * @brief Get device record index by Bluetooth device address
 *
 ****************************************************************************************
 */
uint8_t app_eaci_get_rec_idx(struct bd_addr *addr);

/*
 ****************************************************************************************
 * @brief Set Link status
 *
 ****************************************************************************************
 */
void app_eaci_set_link_status(bool conn, struct bd_addr *addr);

#endif

