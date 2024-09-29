// Copyright 2024 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

/*******************************************************************************
  88888888888 888      d8b                .d888 d8b 888               d8b
      888     888      Y8P               d88P"  Y8P 888               Y8P
      888     888                        888        888
      888     88888b.  888 .d8888b       888888 888 888  .d88b.       888 .d8888b
      888     888 "88b 888 88K           888    888 888 d8P  Y8b      888 88K
      888     888  888 888 "Y8888b.      888    888 888 88888888      888 "Y8888b.
      888     888  888 888      X88      888    888 888 Y8b.          888      X88
      888     888  888 888  88888P'      888    888 888  "Y8888       888  88888P'
                                                        888                 888
                                                        888                 888
                                                        888                 888
     .d88b.   .d88b.  88888b.   .d88b.  888d888 8888b.  888888 .d88b.   .d88888
    d88P"88b d8P  Y8b 888 "88b d8P  Y8b 888P"      "88b 888   d8P  Y8b d88" 888
    888  888 88888888 888  888 88888888 888    .d888888 888   88888888 888  888
    Y88b 888 Y8b.     888  888 Y8b.     888    888  888 Y88b. Y8b.     Y88b 888
     "Y88888  "Y8888  888  888  "Y8888  888    "Y888888  "Y888 "Y8888   "Y88888
         888
    Y8b d88P
     "Y88P"
*******************************************************************************/

#pragma once

#ifndef DYNAMIC_KEYMAP_LAYER_COUNT
#    define DYNAMIC_KEYMAP_LAYER_COUNT 4
#endif // DYNAMIC_KEYMAP_LAYER_COUNT

#ifndef LOCKING_SUPPORT_ENABLE
#    define LOCKING_SUPPORT_ENABLE
#endif // LOCKING_SUPPORT_ENABLE

#ifndef LOCKING_RESYNC_ENABLE
#    define LOCKING_RESYNC_ENABLE
#endif // LOCKING_RESYNC_ENABLE

#ifndef DIODE_DIRECTION
#    define DIODE_DIRECTION COL2ROW
#endif // DIODE_DIRECTION

#ifndef RGB_MATRIX_MAXIMUM_BRIGHTNESS
#    define RGB_MATRIX_MAXIMUM_BRIGHTNESS 125
#endif // RGB_MATRIX_MAXIMUM_BRIGHTNESS

#ifndef RGB_MATRIX_SLEEP
#    define RGB_MATRIX_SLEEP
#endif // RGB_MATRIX_SLEEP

#ifndef RGB_MATRIX_LED_COUNT
#    define RGB_MATRIX_LED_COUNT 82
#endif // RGB_MATRIX_LED_COUNT

#ifndef WS2812_DI_PIN
#    define WS2812_DI_PIN B7
#endif // WS2812_DI_PIN

#ifndef DEVICE_VER
#    define DEVICE_VER 0x0100
#endif // DEVICE_VER

#ifndef MANUFACTURER
#    define MANUFACTURER "Ceynetics"
#endif // MANUFACTURER

#ifndef PRODUCT
#    define PRODUCT "custom_parallel_65"
#endif // PRODUCT

#ifndef PRODUCT_ID
#    define PRODUCT_ID 0x807A
#endif // PRODUCT_ID

#ifndef VENDOR_ID
#    define VENDOR_ID 0x6F75
#endif // VENDOR_ID

#ifndef MATRIX_COLS
#    define MATRIX_COLS 16
#endif // MATRIX_COLS

#ifndef MATRIX_ROWS
#    define MATRIX_ROWS 5
#endif // MATRIX_ROWS

#ifndef MATRIX_COL_PINS
#    define MATRIX_COL_PINS { E6, D1, D5, F1, F4, F5, F6, F7, C7, C6, B6, B5, B4, D7, D6, D4 }
#endif // MATRIX_COL_PINS

#ifndef MATRIX_ROW_PINS
#    define MATRIX_ROW_PINS { D3, D2, D0, B0, F0 }
#endif // MATRIX_ROW_PINS

#ifndef ENABLE_RGB_MATRIX_ALPHAS_MODS
#    define ENABLE_RGB_MATRIX_ALPHAS_MODS
#endif // ENABLE_RGB_MATRIX_ALPHAS_MODS

#ifndef ENABLE_RGB_MATRIX_BAND_PINWHEEL_SAT
#    define ENABLE_RGB_MATRIX_BAND_PINWHEEL_SAT
#endif // ENABLE_RGB_MATRIX_BAND_PINWHEEL_SAT

#ifndef ENABLE_RGB_MATRIX_BAND_PINWHEEL_VAL
#    define ENABLE_RGB_MATRIX_BAND_PINWHEEL_VAL
#endif // ENABLE_RGB_MATRIX_BAND_PINWHEEL_VAL

#ifndef ENABLE_RGB_MATRIX_SOLID_SPLASH
#    define ENABLE_RGB_MATRIX_SOLID_SPLASH
#endif // ENABLE_RGB_MATRIX_SOLID_SPLASH

#ifndef ENABLE_RGB_MATRIX_SPLASH
#    define ENABLE_RGB_MATRIX_SPLASH
#endif // ENABLE_RGB_MATRIX_SPLASH

#ifndef ENABLE_RGB_MATRIX_BAND_SAT
#    define ENABLE_RGB_MATRIX_BAND_SAT
#endif // ENABLE_RGB_MATRIX_BAND_SAT

#ifndef ENABLE_RGB_MATRIX_BAND_SPIRAL_SAT
#    define ENABLE_RGB_MATRIX_BAND_SPIRAL_SAT
#endif // ENABLE_RGB_MATRIX_BAND_SPIRAL_SAT
