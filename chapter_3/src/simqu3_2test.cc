#include "simqu3_2.h"
#include <gtest/gtest.h>

TEST(Simqu3_2test, test1) {
    SqStack sqstack1, sqstack2;
    int pop_elem;
    InitSqstack(sqstack1);
    InitSqstack(sqstack2);

    int cycle_num = MAX_SIZE * 2;
    for(int i = 0; i < cycle_num; i++) {
        EXPECT_EQ(1, PushQueueOfTwoSqstack(sqstack1, sqstack2, 2));
    }
    EXPECT_EQ(0, PushQueueOfTwoSqstack(sqstack1, sqstack2, 2));

    for(int i = 0; i < cycle_num; i++) {
        EXPECT_EQ(1, PopQueueOfTwoSqstack(sqstack1, sqstack2, pop_elem));
        EXPECT_EQ(2, pop_elem);
    }
    EXPECT_EQ(0, PopQueueOfTwoSqstack(sqstack1, sqstack2, pop_elem));
}