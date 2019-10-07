#include<gtest/gtest.h>

int mainexample2_2(int argc, char** argv)
{
	testing::GTEST_FLAG(filter) = "TestDeleteElem.*";
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
