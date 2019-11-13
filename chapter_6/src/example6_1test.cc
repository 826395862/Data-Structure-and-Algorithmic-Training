#include "example6_1.h"
#include <gtest/gtest.h>

TEST(example6_1test,Test1) {
	char abcde_set[5] = {'7', '1', '1', '4','2'};
	char a,b,c,d,e;
	a = abcde_set[0];
	b = abcde_set[1];
	c = abcde_set[2];
	d = abcde_set[3];
	e = abcde_set[4];
	BTNodeChar *bt_char = new BTNodeChar{0};
	bt_char->data = '*';
	InsertBTNodeChar(bt_char, 0, '-', '/');
	InsertBTNodeChar(bt_char->lchild, 0, a, '+');
	InsertBTNodeChar(bt_char->rchild, 0, d, e);
	InsertBTNodeChar(bt_char->lchild->rchild, 0, b, c);
	EXPECT_EQ(10, ComputeExpressionInBT(bt_char));
}