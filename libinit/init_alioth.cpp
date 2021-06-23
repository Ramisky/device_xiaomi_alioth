/*
 * Copyright (C) 2021 The LineageOS Project
 *
 * SPDX-License-Identifier: Apache-2.0
 */

#include <libinit_kona.h>

static const variant_info_t aliothcn_info = {
    .prop_key = "ro.boot.hwc",
    .prop_value = "CN",

    .brand = "Redmi",
    .device = "alioth",
    .marketname = "K40",
    .model = "M2012K11AC",
    .build_description = "apollo-user 11 RKQ1.200826.002 V12.5.1.0.RJDCNXM release-keys",
    .build_fingerprint = "Redmi/apollo/apollo:11/RKQ1.200826.002/V12.5.1.0.RJDCNXM:user/release-keys",
};

static const variant_info_t aliothin_info = {
    .prop_key = "ro.boot.hwc",
    .prop_value = "INDIA",

    .brand = "Xiaomi",
    .device = "aliothin",
    .marketname = "Mi 11X",
    .model = "M2012K11AI",
    .build_description = "apollo-user 11 RKQ1.200826.002 V12.1.3.0.RJDMIXM release-keys",
    .build_fingerprint = "Xiaomi/apollo_global/apollo:11/RKQ1.200826.002/V12.1.3.0.RJDMIXM:user/release-keys",
};

static const variant_info_t alioth_info = {
    .brand = "POCO",
    .device = "alioth",
    .marketname = "POCO F3",
    .model = "M2012K11AG",
    .build_description = "apollopro-user 11 RKQ1.200826.002 V12.1.3.0.RJDMIXM release-keys",
    .build_fingerprint = "Xiaomi/apollopro_global/apollopro:11/RKQ1.200826.002/V12.1.3.0.RJDMIXM:user/release-keys",
};

static const std::vector<variant_info_t> variants = {
    aliothcn_info,
    aliothin_info,
    alioth_info,
};

void vendor_load_properties() {
    search_variant(variants);
}
