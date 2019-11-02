#include "think3_1.h"
#include <math.h>
#include <gtest/gtest.h>
TEST(thinktest, test) {
    EXPECT_LE(abs(5 - pow(sqrt_recur(5, 3, 1e-4), 2)), 1e-3);
    EXPECT_LE(abs(5 - pow(sqrt_cycle(5, 3, 1e-4), 2)), 1e-3);

    EXPECT_LE(abs(10 - pow(sqrt_recur(10, 3, 1e-4), 2)), 1e-3);
    EXPECT_LE(abs(10 - pow(sqrt_cycle(10, 3, 1e-4), 2)), 1e-3);

    EXPECT_LE(abs(0.9 - pow(sqrt_recur(0.9, 3, 1e-4), 2)), 1e-3);
    EXPECT_LE(abs(0.9 - pow(sqrt_cycle(0.9, 3, 1e-4), 2)), 1e-3);
    
    EXPECT_LE(abs(37 - pow(sqrt_recur(37, 3, 1e-4), 2)), 1e-3);
    EXPECT_LE(abs(37 - pow(sqrt_cycle(37, 3, 1e-4), 2)), 1e-3);
}