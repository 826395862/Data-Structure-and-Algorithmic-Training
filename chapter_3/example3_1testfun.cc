#include "example3_1.h"
#include "datatype.h"
#include <gtest/gtest.h>

TEST(Example3_1Test,Test1) {
	char exp_1[] = ")ds(";
	char exp_2[] = "ds()d";
	char exp_3[] = "(d)s(ds)";
	char exp_4[] = "(d)s(ds";
	char exp_5[] = "(d)s(ds)(";
	char exp_6[] = "(d)s(ds))";
	char exp_7[] = "(ds(ds))";
	char exp_8[] = "(ds)ds)(";
	EXPECT_EQ(0, IsMatchAboutBrackets(exp_1, 4));
	EXPECT_EQ(1, IsMatchAboutBrackets(exp_2, 5));
	EXPECT_EQ(1, IsMatchAboutBrackets(exp_3, 8));
	EXPECT_EQ(0, IsMatchAboutBrackets(exp_4, 7));
	EXPECT_EQ(0, IsMatchAboutBrackets(exp_5, 9));
	EXPECT_EQ(0, IsMatchAboutBrackets(exp_6, 9));
	EXPECT_EQ(1, IsMatchAboutBrackets(exp_7, 8));
	EXPECT_EQ(0, IsMatchAboutBrackets(exp_8, 8));
}