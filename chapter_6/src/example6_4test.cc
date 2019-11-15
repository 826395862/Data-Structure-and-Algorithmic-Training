#include "example6_4.h"
#include <gtest/gtest.h>

TEST(example6_4test,Test1) {
	BTNode *bt = new BTNode{0};
	bt->data = 0;
	InsertBTNode(bt, 0, 5, 6);
	InsertBTNode(bt->lchild, 0, 8, 9);
	InsertBTNode(bt->rchild, 0, 3, 4);
	InsertBTNode(bt->lchild->rchild, 1, 11, 12);

	int pick_elem = 0;
	EXPECT_EQ(0, PickElemPreErgodic(bt, 6, pick_elem));
	EXPECT_EQ(6, pick_elem);
	EXPECT_EQ(0, PickElemPreErgodic(bt, 5, pick_elem));
	EXPECT_EQ(12, pick_elem);
	EXPECT_EQ(-1, PickElemPreErgodic(bt, 9, pick_elem));
}