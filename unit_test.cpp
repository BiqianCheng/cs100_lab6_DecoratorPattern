#include "gtest/gtest.h"

#include "add_test.hpp"
#include "div_test.hpp"
#include "mult_test.hpp"
#include "op_test.hpp"
#include "pow_test.hpp"
#include "rand_test.hpp"
#include "sub_test.hpp"
#include "Abs_test.hpp"
#include "Ceil_test.hpp"
#include "Floor_test.hpp"
#include "Paren_test.hpp"
#include "Trunc_test.hpp"

int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}

