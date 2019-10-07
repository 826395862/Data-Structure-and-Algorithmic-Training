#include "example2-3.h"
#include "datatype.h"
#include <gtest/gtest.h>

class TestMergeLNode : public testing::Test {
public:
	static Sqlist sqlist_a;
	static Sqlist sqlist_b;
	static LNode *A;
	static LNode *B;
	static LNode *C;
	static void SetUpTestCase() {
		C->next = NULL;
	}
};

Sqlist TestMergeLNode::sqlist_a = {{1, 2, 3, 5, 6, 8, 20, 21, 34, 55}, 10};
Sqlist TestMergeLNode::sqlist_b = {{1, 4, 4, 5, 7, 9, 55, 56}, 8};
LNode* TestMergeLNode::A = CreatLinkedList(sqlist_a);
LNode* TestMergeLNode::B = CreatLinkedList(sqlist_b);
LNode* TestMergeLNode::C = (LNode*)malloc(sizeof(LNode));

TEST_F(TestMergeLNode,test)
{
	Sqlist sqlist_after_merge = {{1, 1, 2, 3, 4, 4, 5, 5, 6, 7, 8, 9, 20, 21, 34, 55, 55, 56}, 18};
	Sqlist sqlist_after_delete = {{1, 1, 2, 4, 4, 5, 5, 6, 7, 8, 9, 20, 21, 34, 55, 55, 56}, 17};
	MergeLNode(A, B, C);
	LNode *p = C->next;

	for(auto i : sqlist_after_merge.data) {
		EXPECT_EQ(i, p->data)<<"after merge position is"<<i;
		p = p->next;
	}
	EXPECT_EQ(NULL, p)<<"p isn't NULL in ending";

	EXPECT_EQ(1, DeleteElementInLinkedlist(C, 3));
	EXPECT_EQ(0, DeleteElementInLinkedlist(C, 10));
	p = C->next;

	for(auto i : sqlist_after_delete.data) {
			EXPECT_EQ(i, p->data)<<"after merge position is"<<i;
			p = p->next;
		}
	EXPECT_EQ(NULL, p)<<"after merge p isn't NULL in ending";

}
