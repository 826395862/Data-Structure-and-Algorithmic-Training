#include<gtest/gtest.h>

int mainexample2_3(int argc, char** argv)
{
	testing::GTEST_FLAG(filter) = "TestMergeLNode.*";
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
