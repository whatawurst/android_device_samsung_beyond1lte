$(call inherit-product, $(SRC_TARGET_DIR)/product/embedded.mk)

# Inherit device configuration
$(call inherit-product, device/samsung/beyond1lte/device.mk)

### BOOTANIMATION
# vendor/omni/config/common_full_phone.mk
TARGET_SCREEN_HEIGHT := 3040
TARGET_SCREEN_WIDTH := 1440
# vendor/omni/config/common.mk
TARGET_BOOTANIMATION_HALF_RES := true

### OMNI
$(call inherit-product, vendor/omni/config/common.mk)

## Device identifier. This must come after all inclusions
PRODUCT_NAME := omni_beyond1lte
PRODUCT_DEVICE := beyond1lte
PRODUCT_BRAND := samsung
PRODUCT_MODEL := SM-G973F
PRODUCT_MANUFACTURER := samsung

PRODUCT_BUILD_PROP_OVERRIDES += \
    PRODUCT_NAME=beyond1ltexx \
    PRODUCT_DEVICE=beyond1 \
    PRIVATE_BUILD_DESC="beyond1ltexx-user 10 QP1A.190711.020 G970FXXU4BTA8 release-keys"

BUILD_FINGERPRINT := samsung/beyond1ltexx/beyond1:10/QP1A.190711.020/G970FXXU4BTA8:user/release-keys

ifneq ($(OMNI_DEV_CERTIFICATE),)
    PRODUCT_DEFAULT_DEV_CERTIFICATE := $(OMNI_DEV_CERTIFICATE)
endif
