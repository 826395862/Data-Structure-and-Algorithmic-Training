#include "example2-1.h"
#include "datatype.h"
#include<gtest/gtest.h>

class TestInsertElem : public testing::Test //套装例子
{
public:
    static void SetUpTestCase() //测试套件的第一个测试用例开始前，SetUpTestCase()函数会被调用
    {
    }
    static void TearDownTestCase() //在测试套件中的最后一个测试用例运行结束后，TearDownTestCase()函数会被调用
    {}

    Sqlist sqlist = {{1,2,3,5,6,8,20,21,34,55}, 10};;
};

TEST_F(TestInsertElem, TestFindElemPosition)
{
    EXPECT_EQ(0, FindElemPosition(sqlist, 0));
    EXPECT_EQ(0, FindElemPosition(sqlist, 1));
    EXPECT_EQ(2, FindElemPosition(sqlist, 3));
    EXPECT_EQ(3, FindElemPosition(sqlist, 4));
    EXPECT_EQ(9, FindElemPosition(sqlist, 55));
    EXPECT_EQ(10, FindElemPosition(sqlist, 56));

}

TEST_F(TestInsertElem, TestInsertElem)
{
	InsertElem(sqlist, 1);   // 1,1,2,3,5,6,8,20,21,34,55
	EXPECT_EQ(1, sqlist.data[0]);
	EXPECT_EQ(1, sqlist.data[1]);
	InsertElem(sqlist, 0);   // 0,1,1,2,3,5,6,8,20,21,34,55
	EXPECT_EQ(0, sqlist.data[0]);
	InsertElem(sqlist, 4);   // 0,1,1,2,3,4,5,6,8,20,21,34,55
	EXPECT_EQ(4, sqlist.data[5]);
	InsertElem(sqlist, 55);  // 0,1,1,2,3,4,5,6,8,20,21,34,55,55
	EXPECT_EQ(55, sqlist.data[13]);
	InsertElem(sqlist, 56);  // 0,1,1,2,3,4,5,6,8,20,21,34,55,55,56
	EXPECT_EQ(56, sqlist.data[14]);
}
