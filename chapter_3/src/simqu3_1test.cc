#include "simqu3_1.h"
#include "gtest/gtest.h"

TEST(Simqu3_1Test, Test) {
    ShareStack share_stack;
    InitShareStack(share_stack);
    
    int cycle_num = MAX_SIZE / 2;
    for(int i = 0; i < cycle_num; i++) {
        EXPECT_EQ(1, PushShareStack(share_stack, 0, 1));
        EXPECT_EQ(1, PushShareStack(share_stack, 1, 2));
    }
    
    EXPECT_EQ(0, PushShareStack(share_stack, 0, 1));
    EXPECT_EQ(0, PushShareStack(share_stack, 1, 1));
    EXPECT_EQ(-1, PushShareStack(share_stack, 2, 1));
    
    int pop_elem_stack1,pop_elem_stack2;
    for(int i = 0; i < cycle_num; i++) {
        EXPECT_EQ(1, PopShareStack(share_stack, 0, pop_elem_stack1));
        EXPECT_EQ(1, pop_elem_stack1);
        EXPECT_EQ(1, PopShareStack(share_stack, 1, pop_elem_stack2));
        EXPECT_EQ(2, pop_elem_stack2);
    }
        
    EXPECT_EQ(-1, PopShareStack(share_stack, -1, pop_elem_stack1));
    
    EXPECT_EQ(0, PopShareStack(share_stack, 0, pop_elem_stack1));
    EXPECT_EQ(0, PopShareStack(share_stack, 1, pop_elem_stack1));
}