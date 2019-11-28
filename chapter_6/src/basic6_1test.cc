#include "basic6_1.h"
#include <gtest/gtest.h>

TEST(basic6_1test,Test) {
	BTNode *bt = new BTNode{0};
	bt->data = 0;
	InsertBTNode(bt, 0, 5, 6);
	InsertBTNode(bt->lchild, 0, 8, 9);
	InsertBTNode(bt->rchild, 0, 3, 4);
	InsertBTNode(bt->lchild->rchild, 1, 11, 12);

	EXPECT_EQ(8, ComputeBTNode(bt));
}