#include "appquestion.h"

#include <gtest/gtest.h>

TEST(AppQuestion,Test1) {
    Sqlist sqlist= {{3, 4, 5, 6, 7}, 5};
    LNode *linkedlist = CreatLinkedList(sqlist);
    EXPECT_EQ(7, FindElemNumToEndInLinkedlist(linkedlist, 1));
    EXPECT_EQ(6, FindElemNumToEndInLinkedlist(linkedlist, 2));
    EXPECT_EQ(5, FindElemNumToEndInLinkedlist(linkedlist, 3));
    EXPECT_EQ(4, FindElemNumToEndInLinkedlist(linkedlist, 4));
    EXPECT_EQ(3, FindElemNumToEndInLinkedlist(linkedlist, 5));
    EXPECT_EQ(-1, FindElemNumToEndInLinkedlist(linkedlist, 0));

    delete (linkedlist);
}

TEST(AppQuestion,Test2) {
    Sqlist sqlist= {{3, 4, 5, 6, 7}, 5};
    RotateLeftSqlist(sqlist, 2);
    EXPECT_EQ(5, sqlist.data[0]);
    EXPECT_EQ(6, sqlist.data[1]);
    EXPECT_EQ(7, sqlist.data[2]);
    EXPECT_EQ(3, sqlist.data[3]);
    EXPECT_EQ(4, sqlist.data[4]);
}

TEST(AppQuestion,Test3) {
    Sqlist sqlist_a= {{0, 5, 5, 5, 7}, 5};
    EXPECT_EQ(5, FindMainElemInSqlist(sqlist_a));
    Sqlist sqlist_b= {{5, 0, 0, 5, 5, 2, 3, 5, 5}, 9};
    EXPECT_EQ(5, FindMainElemInSqlist(sqlist_b));
}