#include "basic3_3.h"
#include <gtest/gtest.h>

TEST(basic3_3test, test) {
    char temple1[] = "IOIIOO";
    char temple2[] = "IOIIO";
    char temple3[] = "IOIOO";
    char temple4[] = "OIOIOI";
    EXPECT_EQ(1, IsValidIOSequence(temple1));
    EXPECT_EQ(0, IsValidIOSequence(temple2));
    EXPECT_EQ(0, IsValidIOSequence(temple3));
    EXPECT_EQ(0, IsValidIOSequence(temple4));
}