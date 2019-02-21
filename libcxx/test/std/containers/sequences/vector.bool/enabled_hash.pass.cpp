//===----------------------------------------------------------------------===//
//
// Part of the LLVM Project, under the Apache License v2.0 with LLVM Exceptions.
// See https://llvm.org/LICENSE.txt for license information.
// SPDX-License-Identifier: Apache-2.0 WITH LLVM-exception
//
//===----------------------------------------------------------------------===//

// UNSUPPORTED: c++98, c++03

// <vector>

// Test that <vector> provides all of the arithmetic, enum, and pointer
// hash specializations.

#include <vector>

#include "poisoned_hash_helper.hpp"
#include "min_allocator.h"

int main(int, char**) {
  test_library_hash_specializations_available();
  {
    test_hash_enabled_for_type<std::vector<bool> >();
    test_hash_enabled_for_type<std::vector<bool, min_allocator<bool>>>();
  }

  return 0;
}
