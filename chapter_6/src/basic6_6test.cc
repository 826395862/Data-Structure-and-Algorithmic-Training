#include "basic6_6.h"
#include <gtest/gtest.h>

TEST(basic6_6test,Test) {
	Sqlist pre, post;
	post.length = 7;
	pre.length = 7;
	pre.data[0] = 0;
	pre.data[1] = 5;
	pre.data[2] = 8;
	pre.data[3] = 9;
	pre.data[4] = 6;
	pre.data[5] = 3;
	pre.data[6] = 4;
	EXPECT_EQ(0, FullBtreePreSetToPostSet(pre, 0, 6, post, 0, 6));

	EXPECT_EQ(8, post.data[0]);
	EXPECT_EQ(9, post.data[1]);
	EXPECT_EQ(5, post.data[2]);
	EXPECT_EQ(3, post.data[3]);
	EXPECT_EQ(4, post.data[4]);
	EXPECT_EQ(6, post.data[5]);
	EXPECT_EQ(0, post.data[6]);
}