ifndef TARGET_KERNEL_USE
TARGET_KERNEL_USE=4.9
endif

$(warning OUT_DIR = '$(OUT_DIR)')
ifeq (,$(strip $(OUT_DIR)))
PRODUCT_OUT_DIR := out/target/product/hikey960
else
PRODUCT_OUT_DIR := $(OUT_DIR)/target/product/hikey960
endif
$(warning PRODUCT_OUT_DIR = '$(PRODUCT_OUT_DIR)')

PRODUCT_OUT_DIR := $(OUT_DIR)/target/product/hikey960
TARGET_PREBUILT_KERNEL := $(PRODUCT_OUT_DIR)/Image.gz-hikey960-$(TARGET_KERNEL_USE)
TARGET_PREBUILT_DTB := $(PRODUCT_OUT_DIR)/hi3660-hikey960.dtb-$(TARGET_KERNEL_USE)

ifeq ($(TARGET_KERNEL_USE), 4.4)
  HIKEY_USE_LEGACY_TI_BLUETOOTH := true
else
  HIKEY_USE_LEGACY_TI_BLUETOOTH := false
endif

#
# Inherit the full_base and device configurations
$(call inherit-product, $(SRC_TARGET_DIR)/product/core_64_bit.mk)
$(call inherit-product, device/linaro/hikey/hikey960/device-hikey960.mk)
$(call inherit-product, device/linaro/hikey/device-common.mk)
$(call inherit-product, $(SRC_TARGET_DIR)/product/full_base.mk)

#
# Overrides
PRODUCT_NAME := hikey960
PRODUCT_DEVICE := hikey960
PRODUCT_BRAND := Android
PRODUCT_MODEL := AOSP on hikey960
