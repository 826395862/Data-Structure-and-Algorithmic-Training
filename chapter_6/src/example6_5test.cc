#include "example6_5.h"
#include <gtest/gtest.h>

TEST(example6_5test,Test) {
	BTNode *bt = new BTNode{0};
	bt->data = 0;
	InsertBTNode(bt, 0, 5, 6);
	InsertBTNode(bt->lchild, 0, 8, 9);
	InsertBTNode(bt->rchild, 0, 3, 4);
	InsertBTNode(bt->lchild->rchild, 1, 11, 12);

	int wild = 0;
	EXPECT_EQ(0, SearchWildOfTree(bt, wild));
	EXPECT_EQ(4, wild);
}