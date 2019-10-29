#include "basic3_6.h"
#include <gtest/gtest.h>
#include "malloc.h"
TEST(basic3_6test, test) {
    LNode *liqueue_cycle = (LNode*)malloc(sizeof(LNode));
    liqueue_cycle->next = liqueue_cycle;
    int out_elem;
    
    EXPECT_EQ(0, OutElemInLiqueueWithRear(liqueue_cycle, out_elem));
    
    EXPECT_EQ(1,InsertElemInLiqueueWithRear(liqueue_cycle, 1));
    EXPECT_EQ(1,InsertElemInLiqueueWithRear(liqueue_cycle, 2));
    
    EXPECT_EQ(1, OutElemInLiqueueWithRear(liqueue_cycle, out_elem));
    EXPECT_EQ(1, out_elem);
    
    EXPECT_EQ(1, OutElemInLiqueueWithRear(liqueue_cycle, out_elem));
    EXPECT_EQ(2, out_elem);
    
    EXPECT_EQ(0, OutElemInLiqueueWithRear(liqueue_cycle, out_elem));

}