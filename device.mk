#
# Copyright (C) 2021 The LineageOS Project
#
# SPDX-License-Identifier: Apache-2.0
#

# Overlays
DEVICE_PACKAGE_OVERLAYS += \
    $(LOCAL_PATH)/overlay \
    $(LOCAL_PATH)/overlay-lineage

# Device uses high-density artwork where available
PRODUCT_AAPT_CONFIG := normal
PRODUCT_AAPT_PREF_CONFIG := xhdpi

# Boot animation
TARGET_SCREEN_HEIGHT := 2400
TARGET_SCREEN_WIDTH := 1080

# Device parts
PRODUCT_PACKAGES += \
    DeviceParts

PRODUCT_SHIPPING_API_LEVEL := 30

# Inherit from xiaomi sm8250-common
$(call inherit-product, device/xiaomi/sm8250-common/kona.mk)

# Inherit from vendor blobs
$(call inherit-product, vendor/xiaomi/alioth/alioth-vendor.mk)

BOARD_BUILD_PRODUCT_IMAGE := true

