#include "example3_3.h"
#include "datatype.h"
#include <gtest/gtest.h>

TEST(Example3_3Test, Test) {
    LNode *list_stack;
    int pop_elem_temp;
    EXPECT_EQ(false, IsEmptyListStack(list_stack));
    InitListStackNohead(list_stack);
    EXPECT_EQ(nullptr, list_stack);
    EXPECT_EQ(true, IsEmptyListStack(list_stack));
    PushListStack(list_stack, 3);
    EXPECT_EQ(3, list_stack->data);
    PushListStack(list_stack, 4);
    EXPECT_EQ(4, list_stack->data);
    EXPECT_EQ(false, IsEmptyListStack(list_stack));
    EXPECT_EQ(1, PopListStack(list_stack, pop_elem_temp));
    EXPECT_EQ(4, pop_elem_temp);
    EXPECT_EQ(1, PopListStack(list_stack, pop_elem_temp));
    EXPECT_EQ(3, pop_elem_temp);
    EXPECT_EQ(0, PopListStack(list_stack, pop_elem_temp));
    EXPECT_EQ(true, IsEmptyListStack(list_stack));
}
