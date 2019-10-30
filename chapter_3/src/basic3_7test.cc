#include "basic3_7.h"
#include "gtest/gtest.h"

TEST(basic3_7test, test) {
    CycleQueue cycle_queue;
    InitCycleQueue(cycle_queue);
    int pop_elem;
    EXPECT_EQ(0, DeCycleQueueInRear(cycle_queue, pop_elem));

    EXPECT_EQ(1, EnCycleQueueInFront(cycle_queue, 2));
    EXPECT_EQ(1, EnCycleQueueInFront(cycle_queue, 2));
    EXPECT_EQ(1, DeCycleQueueInRear(cycle_queue, pop_elem));
    EXPECT_EQ(1, DeCycleQueueInRear(cycle_queue, pop_elem));
    EXPECT_EQ(0, DeCycleQueueInRear(cycle_queue, pop_elem));

    EXPECT_EQ(1, EnCycleQueueInFront(cycle_queue, 2));
    EXPECT_EQ(1, EnCycleQueueInFront(cycle_queue, 2));
    for(int i = 0; i < MAX_SIZE - 3; i++) {
        EXPECT_EQ(1, EnCycleQueueInFront(cycle_queue, 1));
    }

    EXPECT_EQ(0, EnCycleQueueInFront(cycle_queue, 1));

    EXPECT_EQ(1, DeCycleQueueInRear(cycle_queue, pop_elem));
    EXPECT_EQ(2, pop_elem);
    EXPECT_EQ(1, DeCycleQueueInRear(cycle_queue, pop_elem));
    EXPECT_EQ(2, pop_elem);
    for(int i = 0; i < MAX_SIZE - 3; i++) {
        EXPECT_EQ(1, DeCycleQueueInRear(cycle_queue, pop_elem));
        EXPECT_EQ(1, pop_elem);
    }
    EXPECT_EQ(0, DeCycleQueueInRear(cycle_queue, pop_elem));
}