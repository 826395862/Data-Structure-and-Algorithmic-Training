#include "example3_2.h"
#include "datatype.h"
#include <gtest/gtest.h>

TEST(Example3_2Test, Test1) {
    char str_1[] = "952*-2/";
    char str_2[] = "952+-4-";
    char str_3[] = "952-*7777++++";
    char str_4[] = "952-*2*";
    EXPECT_EQ(0, cal(str_1));
    EXPECT_EQ(-2, cal(str_2));
    EXPECT_EQ(55, cal(str_3));
    EXPECT_EQ(54, cal(str_4));
}
