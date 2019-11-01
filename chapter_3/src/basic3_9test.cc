#include "basic3_9.h"
#include <gtest/gtest.h>

TEST(basic3_9test,test) {
    EXPECT_EQ(-1, DecimalToBinary(-2));
    EXPECT_EQ(1010, DecimalToBinary(10));
    EXPECT_EQ(0, DecimalToBinary(0));
    EXPECT_EQ(1100100, DecimalToBinary(100));
}