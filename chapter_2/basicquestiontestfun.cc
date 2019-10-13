#include "basicquestion.h"
#include "creat_random_list.h"
#include "datatype.h"
#include <gtest/gtest.h> 
   
TEST(BasicQuestion, Test3) {
	Sqlist sqlist_source = {{3, 0, 1, 1, 8, 8, 4, 2, 89}, 9};
	ReverseSqlist(sqlist_source);
	EXPECT_EQ(89, sqlist_source.data[0]);
	EXPECT_EQ(2, sqlist_source.data[1]);
	EXPECT_EQ(4, sqlist_source.data[2]);
	EXPECT_EQ(8, sqlist_source.data[3]);
	EXPECT_EQ(8, sqlist_source.data[4]);
	EXPECT_EQ(1, sqlist_source.data[5]);
	EXPECT_EQ(1, sqlist_source.data[6]);
	EXPECT_EQ(0, sqlist_source.data[7]);
	EXPECT_EQ(3, sqlist_source.data[8]);
}

TEST(BasicQuestion, Test4) {
	Sqlist sqlist = {{3, 4, 5}, 3};
    Sqlist sqlist_b = {{3, 4, 5}, 3};
	Sqlist sqlist_c = {{3, 4, 5, 6}, 4};

	DeleteElemsInSqlist(sqlist, 0, 0);
	EXPECT_EQ(4, sqlist.data[0]);
	EXPECT_EQ(5, sqlist.data[1]);

	DeleteElemsInSqlist(sqlist_b, 1, 1);
	EXPECT_EQ(3, sqlist_b.data[0]);
	EXPECT_EQ(5, sqlist_b.data[1]);
		
	DeleteElemsInSqlist(sqlist_c, 1, 2);
	EXPECT_EQ(3, sqlist_c.data[0]);
	EXPECT_EQ(6, sqlist_c.data[1]);
} 
   
TEST(BasicQuestion, Test5) {
	Sqlist sqlist = {{3, 4, 5, 1, 1}, 5};
	DivideAccordingHeadElem(sqlist);
	EXPECT_EQ(1, sqlist.data[0]);
	EXPECT_EQ(1, sqlist.data[1]);
	EXPECT_EQ(4, sqlist.data[3]);
	EXPECT_EQ(5, sqlist.data[4]);
}

TEST(BasicQuestion, Test6) {
	Sqlist sqlist = {{1, 1, 2, 3, 3, 3, 4, 4, 7, 7, 7, 9, 9, 9}, 14};
	LNode *linkedlist = CreatLinkedList(sqlist);
    DeleteRepeatElemInLinkedlist(linkedlist);
	EXPECT_EQ(1, ElemInLinkedlist(linkedlist, 0));
	EXPECT_EQ(2, ElemInLinkedlist(linkedlist, 1));
	EXPECT_EQ(3, ElemInLinkedlist(linkedlist, 2));
	EXPECT_EQ(4, ElemInLinkedlist(linkedlist, 3));
	EXPECT_EQ(7, ElemInLinkedlist(linkedlist, 4));
	EXPECT_EQ(9, ElemInLinkedlist(linkedlist, 5));
	DeleteLinkedlist(linkedlist);
} 
   
TEST(BasicQuestion, Test7) {
	Sqlist sqlist = {{1, 3, 0, 4, 0, 5, 6}, 7};
	LNode *linkedlist = CreatLinkedList(sqlist);
	
	Sqlist sqlist_result = {{1, 3, 4, 0, 5, 6}, 6};
	DeleteMinElemInLinkedList(linkedlist);

	for(int i = 0; i < sqlist_result.length; i++) {
		EXPECT_EQ(sqlist_result.data[i], ElemInLinkedlist(linkedlist, i));
	}
	DeleteLinkedlist(linkedlist);
}

TEST(BasicQuestion, Test8) {
	Sqlist sqlist = {{1, 3, 0, 4, 5, 6}, 6};
	LNode *linkedlist = CreatLinkedList(sqlist);
	
	Sqlist sqlist_result = {{6, 5, 4, 0, 3, 1}, 6};
	ReverseLinkedlist(linkedlist);
	for(int i = 0; i < sqlist_result.length; i++) {
		EXPECT_EQ(sqlist_result.data[i], ElemInLinkedlist(linkedlist, i));
	}
} 
   
TEST(BasicQuestion, Test9) {
	Sqlist sqlist = {{1, 3, 0, 4, 5, 6}, 6};
	LNode *linkedlist_A = CreatLinkedList(sqlist);
	LNode *linkedlist_B ;

	Sqlist sqlist_result_odd = {{1, 3, 5}, 3};
	Sqlist sqlist_result_event = {{0, 4, 6}, 3};
	DivideAccordingElemIsOdd(linkedlist_A, linkedlist_B);

	for(int i = 0; i < sqlist_result_odd.length; i++) {
		EXPECT_EQ(sqlist_result_odd.data[i], ElemInLinkedlist(linkedlist_A, i));
	}
	
	for(int i = 0; i < sqlist_result_event.length; i++) {
		EXPECT_EQ(sqlist_result_event.data[i], ElemInLinkedlist(linkedlist_B, i));
	}
	
	free(linkedlist_A);
	free(linkedlist_B);
}
