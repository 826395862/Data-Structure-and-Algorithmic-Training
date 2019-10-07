#include "example2-2.h"
#include "datatype.h"
#include <gtest/gtest.h>

class TestDeleteElem : public testing::Test //套装例子
{
public:
    static void SetUpTestCase() //测试套件的第一个测试用例开始前，SetUpTestCase()函数会被调用
    {
    }
    static void TearDownTestCase() //在测试套件中的最后一个测试用例运行结束后，TearDownTestCase()函数会被调用
    {}

    Sqlist sqlist = {{1,2,3,5,6,8,20,21,34,55}, 10};
};

TEST_F(TestDeleteElem, test)
{
	int delete_element = 0;
	int temp = delete_element;
	EXPECT_EQ(0, DeleteElem(sqlist, -1, delete_element));
	EXPECT_EQ(temp, delete_element);
	EXPECT_EQ(10, sqlist.length);

	EXPECT_EQ(1, DeleteElem(sqlist, 9, delete_element));
    EXPECT_EQ(55, delete_element);
	EXPECT_EQ(9, sqlist.length);

	temp = delete_element;
	EXPECT_EQ(0, DeleteElem(sqlist, 9, delete_element));
	EXPECT_EQ(temp, delete_element);
    EXPECT_EQ(9, sqlist.length);
}
