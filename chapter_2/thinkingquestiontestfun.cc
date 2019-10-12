#include "thinkingquestion.h"
#include "creat_random_list.h"
#include "datatype.h"
#include <gtest/gtest.h>

TEST(ThinkingQuestion,Test1) {
	Sqlist sqlist = CreatRandomSqlist(1, 1000, NUMBERARRY);
	int i = 500;
	int min_element_in_sqlist = FindMinElementInSqlist(sqlist, i);
	SortSqlist(sqlist);
	EXPECT_EQ(min_element_in_sqlist, sqlist.data[0]);
}

TEST(ThinkingQuestion,Test2) {
	Sqlist sqlist = CreatRandomSqlist(1, 1000, 20);
	LNode *Linkedlist = CreatLinkedList(sqlist);
	PrintLinkedlist(Linkedlist);
	ReversePrintLinkedlist(Linkedlist);
}

TEST(ThinkingQuestion,Test4) {
	Sqlist sqlist_a = {{0}, 0};
	Sqlist sqlist_b = {{0, 1}, 2};
	Sqlist sqlist_c = {{0, 3}, 2};
	Sqlist sqlist_d = {{1, 0}, 2};
	Sqlist sqlist_e = {{0, 0, 1}, 3};
    EXPECT_EQ(0, Compare(sqlist_a, sqlist_a));
    EXPECT_EQ(0, Compare(sqlist_b, sqlist_b));
    
	EXPECT_EQ(1, Compare(sqlist_b, sqlist_a));
    EXPECT_EQ(1, Compare(sqlist_c, sqlist_b));
    EXPECT_EQ(1, Compare(sqlist_d, sqlist_c));   
    EXPECT_EQ(1, Compare(sqlist_d, sqlist_e));   
    
	EXPECT_EQ(-1, Compare(sqlist_a, sqlist_b));
    EXPECT_EQ(-1, Compare(sqlist_b, sqlist_c));
    EXPECT_EQ(-1, Compare(sqlist_c, sqlist_d));
}
