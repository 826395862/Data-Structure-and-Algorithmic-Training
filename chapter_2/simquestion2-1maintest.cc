#include <gtest/gtest.h>

int mainsimquestion2_1(int argc,char* argv[])
{
	testing::GTEST_FLAG(filter) = "TestMergeLNode.*";
	testing::InitGoogleTest(&argc, argv);
	return RUN_ALL_TESTS();
}
