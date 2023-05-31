// Copyright (C) 2023 Intel Corporation
// Part of the Unified-Runtime Project, under the Apache License v2.0 with LLVM Exceptions.
// See LICENSE.TXT
// SPDX-License-Identifier: Apache-2.0 WITH LLVM-exception

#include "base.hpp"

#include <uma/base.h>

using uma_test::test;

TEST_F(test, versionEncodeDecode) {
    auto encoded = UMA_MAKE_VERSION(0, 9);
    ASSERT_EQ(UMA_MAJOR_VERSION(encoded), 0);
    ASSERT_EQ(UMA_MINOR_VERSION(encoded), 9);
}
