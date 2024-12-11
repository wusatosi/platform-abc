// SPDX-License-Identifier: Apache-2.0 WITH LLVM-exception

#include <beman/exemplar/identity.hpp>

#include <gtest/gtest.h>

#include <algorithm>
#include <functional>

namespace exe = beman::exemplar;

TEST(IdentityTest, call_identity_with_int) { exe::platform(); }
