#include "basic3_8.h"
#include <gtest/gtest.h>

TEST(basic3_8test, test) {
    CycleQueueWithTag cycle_queue_with_tag;
    InitCycleQueueWithTag(cycle_queue_with_tag);
    int pop_elem;
    EXPECT_EQ(0, DeCycleQueueWithTagInFront(cycle_queue_with_tag, pop_elem));

    EXPECT_EQ(1, EnCycleQueueWithTagInRear(cycle_queue_with_tag, 2));
    EXPECT_EQ(1, EnCycleQueueWithTagInRear(cycle_queue_with_tag, 2));
    EXPECT_EQ(1, DeCycleQueueWithTagInFront(cycle_queue_with_tag, pop_elem));
    EXPECT_EQ(1, DeCycleQueueWithTagInFront(cycle_queue_with_tag, pop_elem));
    EXPECT_EQ(0, DeCycleQueueWithTagInFront(cycle_queue_with_tag, pop_elem));

    EXPECT_EQ(1, EnCycleQueueWithTagInRear(cycle_queue_with_tag, 2));
    EXPECT_EQ(1, EnCycleQueueWithTagInRear(cycle_queue_with_tag, 2));
    for(int i = 0; i < MAX_SIZE - 2; i++) {
        EXPECT_EQ(1, EnCycleQueueWithTagInRear(cycle_queue_with_tag, 1));
    }

    EXPECT_EQ(0, EnCycleQueueWithTagInRear(cycle_queue_with_tag, 1));

    EXPECT_EQ(1, DeCycleQueueWithTagInFront(cycle_queue_with_tag, pop_elem));
    EXPECT_EQ(2, pop_elem);
    EXPECT_EQ(1, DeCycleQueueWithTagInFront(cycle_queue_with_tag, pop_elem));
    EXPECT_EQ(2, pop_elem);
    for(int i = 0; i < MAX_SIZE - 2; i++) {
        EXPECT_EQ(1, DeCycleQueueWithTagInFront(cycle_queue_with_tag, pop_elem));
        EXPECT_EQ(1, pop_elem);
    }
    EXPECT_EQ(0, DeCycleQueueWithTagInFront(cycle_queue_with_tag, pop_elem));
}