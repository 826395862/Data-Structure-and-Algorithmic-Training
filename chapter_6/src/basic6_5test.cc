#include "basic6_5.h"
#include <gtest/gtest.h>

TEST(basic6_2test,Test) {
	BTNodeWithParent *bt = new BTNodeWithParent{0};
	bt->data = 0;
	InsertBTNodeWithParent(bt, 0, 5, 6);
	InsertBTNodeWithParent(bt->lchild, 0, 8, 9);
	InsertBTNodeWithParent(bt->rchild, 0, 3, 4);
	InsertBTNodeWithParent(bt->rchild->rchild, 0, 11, 12);

	EXPECT_EQ(0, PreLoopBTNodeWithParent(bt, nullptr));

	BTNodeWithParent *temp_btnode_with_parent;

	temp_btnode_with_parent = bt->rchild->rchild->rchild;
	EXPECT_EQ(12, temp_btnode_with_parent->data);
	
	temp_btnode_with_parent = temp_btnode_with_parent->parent;
	EXPECT_EQ(4, temp_btnode_with_parent->data);
	
	temp_btnode_with_parent = temp_btnode_with_parent->parent;
	EXPECT_EQ(6, temp_btnode_with_parent->data);
	
	temp_btnode_with_parent = temp_btnode_with_parent->parent;
	EXPECT_EQ(0, temp_btnode_with_parent->data);

	temp_btnode_with_parent = temp_btnode_with_parent->parent;
	EXPECT_EQ(nullptr, temp_btnode_with_parent);
}