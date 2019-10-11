#include "simquestion2-2.h"
#include "datatype.h"
#include <gtest/gtest.h>

class SubLinkedlistTest : public testing::Test {
protected:
	static LNode *source_Linkedlist;
	static LNode *sub_Linkedlist;
	static void SetUpTestCase() {
		Sqlist A = {{1, 1, 3, 4, 5, 6, 7, 8, 9, 9, 11, 12, 13, 14, 15}, 15};
		Sqlist B = {{1, 4, 9, 14, 15}, 5};
		source_Linkedlist = CreatLinkedList(A);
		sub_Linkedlist = CreatLinkedList(B);
	}
};

LNode *SubLinkedlistTest::source_Linkedlist;
LNode *SubLinkedlistTest::sub_Linkedlist;

TEST_F(SubLinkedlistTest, test) {
	PrintLinkedlist(SubLinkedlistTest::source_Linkedlist);
	PrintLinkedlist(SubLinkedlistTest::sub_Linkedlist);
	SubLinkedlistAlgorithm2(SubLinkedlistTest::source_Linkedlist, SubLinkedlistTest::sub_Linkedlist);
	PrintLinkedlist(SubLinkedlistTest::source_Linkedlist);
	DeleteLinkedlist(SubLinkedlistTest::source_Linkedlist);
	DeleteLinkedlist(SubLinkedlistTest::sub_Linkedlist);
}
