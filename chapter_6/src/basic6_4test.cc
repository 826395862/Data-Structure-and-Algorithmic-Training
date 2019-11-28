#include "basic6_4.h"
#include <gtest/gtest.h>

TEST(basic6_2test,Test) {
	BTNode *bt = new BTNode{0};
	bt->data = 0;
	InsertBTNode(bt, 0, 5, 6);
	InsertBTNode(bt->lchild, 0, 8, 9);
	InsertBTNode(bt->rchild, 0, 3, 4);
	InsertBTNode(bt->rchild->rchild, 0, 11, 12);

    BTNode *head = nullptr, *tail = nullptr;
	EXPECT_EQ(0, LinkLeafNode(bt, head, tail));
	EXPECT_EQ(8, head->data);
	EXPECT_EQ(12, tail->data);
	EXPECT_EQ(12, head->rchild->rchild->rchild->rchild->data);
}