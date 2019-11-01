#include "basic3_10.h"
#include <gtest/gtest.h>

TEST(basic3_10test,test) {
    char char_1[] = "][{}()";
    char char_2[] = "[]{}()";
    char char_3[] = "[{}]()";
    char char_4[] = "[{}()]";
    char char_5[] = "[\"['{\"]()";
    char char_6[] = "[{(})]";
    char char_7[] = "[({})]'}a";
    char char_8[] = "['[\"{']()";
    EXPECT_EQ(0, BracketsPair(char_1));
    EXPECT_EQ(1, BracketsPair(char_2));
    EXPECT_EQ(1, BracketsPair(char_3));
    EXPECT_EQ(1, BracketsPair(char_4));
    EXPECT_EQ(1, BracketsPair(char_5));
    EXPECT_EQ(0, BracketsPair(char_6));
    EXPECT_EQ(1, BracketsPair(char_7));
    EXPECT_EQ(1, BracketsPair(char_8));
}