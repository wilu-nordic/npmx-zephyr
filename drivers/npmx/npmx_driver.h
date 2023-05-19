/*
 * Copyright (c) 2022 Nordic Semiconductor ASA
 *
 * SPDX-License-Identifier: Apache-2.0
 */

#ifndef ZEPHYR_DRIVERS_NPMX_NPMX_DRIVER_H__
#define ZEPHYR_DRIVERS_NPMX_NPMX_DRIVER_H__

#include <npmx_instance.h>
#include <npmx_core.h>

#include <zephyr/device.h>

/**
 * @brief Get a pointer to the npmx instance.
 *
 * @param[in] p_dev Pointer to the nPM Zephyr device.
 *
 * @return Pointer to the npmx instance.
 */
npmx_instance_t *npmx_driver_instance_get(const struct device *p_dev);

/**
 * @brief Configure power fail comparator and register callback handler.
 *
 * @param[in] dev      Pointer to nPM Zephyr device.
 * @param[in] p_config Pointer to POF config structure.
 * @param[in] p_cb     Pointer to POF callback handler.
 *
 * @return Return error code, 0 when succeed
 */
int npmx_driver_register_pof_cb(const struct device *dev, npmx_pof_config_t const *p_config,
				void (*p_cb)(npmx_instance_t *p_pm));

/**
 * @brief Get POF pin index from nPM Zephyr device.
 *
 * @param[in] dev Pointer to nPM Zephyr device.
 *
 * @return Return POF pin index.
 */
int npmx_driver_pof_pin_get(const struct device *dev);

/**
 * @brief Get interrupt pin index from nPM Zephyr device.
 *
 * @param[in] dev Pointer to nPM Zephyr device.
 *
 * @return Return interrupt pin index.
 */
int npmx_driver_int_pin_get(const struct device *dev);

/**
 * @brief Get reset pin index from nPM Zephyr device.
 *
 * @param[in] dev Pointer to nPM Zephyr device.
 *
 * @return Return reset pin index.
 */
int npmx_driver_reset_pin_get(const struct device *dev);

#endif /* ZEPHYR_DRIVERS_NPMX_NPMX_DRIVER_H__ */
