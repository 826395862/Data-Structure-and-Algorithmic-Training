#include "example6_3.h"
#include <gtest/gtest.h>

TEST(example6_3test,Test1) {
	BTNode *bt = new BTNode{0};
	bt->data = 0;
	InsertBTNode(bt, 0, 5, 6);
	InsertBTNode(bt->lchild, 0, 8, 9);
	InsertBTNode(bt->rchild, 0, 3, 4);
	InsertBTNode(bt->lchild->rchild, 1, 11, 12);

	EXPECT_EQ(0, SearchElemPreErgodic(bt, 0)->data);
	EXPECT_EQ(0, SearchElemInErgodic(bt, 0)->data);
	EXPECT_EQ(0, SearchElemPostErgodic(bt, 0)->data);

	EXPECT_EQ(5, SearchElemPreErgodic(bt, 5)->data);
	EXPECT_EQ(5, SearchElemInErgodic(bt, 5)->data);
	EXPECT_EQ(5, SearchElemPostErgodic(bt, 5)->data);

	EXPECT_EQ(9, SearchElemPreErgodic(bt, 9)->data);
	EXPECT_EQ(9, SearchElemInErgodic(bt, 9)->data);
	EXPECT_EQ(9, SearchElemPostErgodic(bt, 9)->data);

	EXPECT_EQ(3, SearchElemPreErgodic(bt, 3)->data);
	EXPECT_EQ(3, SearchElemInErgodic(bt, 3)->data);
	EXPECT_EQ(3, SearchElemPostErgodic(bt, 3)->data);

	EXPECT_EQ(12, SearchElemPreErgodic(bt, 12)->data);
	EXPECT_EQ(12, SearchElemInErgodic(bt, 12)->data);
	EXPECT_EQ(12, SearchElemPostErgodic(bt, 12)->data);

	EXPECT_EQ(NULL, SearchElemPreErgodic(bt, 11));
	EXPECT_EQ(NULL, SearchElemInErgodic(bt, 11));
	EXPECT_EQ(nullptr, SearchElemPostErgodic(bt, 11));

	EXPECT_EQ(NULL, SearchElemPreErgodic(bt, 7));
	EXPECT_EQ(NULL, SearchElemInErgodic(bt, 7));
	EXPECT_EQ(nullptr, SearchElemPostErgodic(bt, 7));
}