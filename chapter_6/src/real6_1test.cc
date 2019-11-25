#include "real6_1.h"
#include <gtest/gtest.h>

TEST(real6_1test,Test) {
	char pre[] = {'a', 'c', 'd', 'f', 'h', 'i', 'g'};
	char in[] = {'d', 'c', 'f', 'a', 'i', 'h', 'g'};
	BTNodeChar *bt_creat_from_set = CreatBT(pre, 0 , 6, in, 0, 6);
	BTNodeChar *dynamic_btchar_ptr = nullptr;
	BTNodeChar *dynamic_btchar_rchild_ptr = nullptr;
	dynamic_btchar_ptr = bt_creat_from_set;
	EXPECT_EQ('a', dynamic_btchar_ptr->data);
	dynamic_btchar_ptr = dynamic_btchar_ptr->lchild;
	EXPECT_EQ('c', dynamic_btchar_ptr->data);
	dynamic_btchar_rchild_ptr = dynamic_btchar_ptr->rchild;
	dynamic_btchar_ptr = dynamic_btchar_ptr->lchild;
	EXPECT_EQ('d', dynamic_btchar_ptr->data);
	EXPECT_EQ('f', dynamic_btchar_rchild_ptr->data);

	dynamic_btchar_ptr = bt_creat_from_set->rchild;
	EXPECT_EQ('h', dynamic_btchar_ptr->data);
	dynamic_btchar_rchild_ptr = dynamic_btchar_ptr->rchild;
	dynamic_btchar_ptr = dynamic_btchar_ptr->lchild;
	EXPECT_EQ('i', dynamic_btchar_ptr->data);
	EXPECT_EQ('g', dynamic_btchar_rchild_ptr->data);
}