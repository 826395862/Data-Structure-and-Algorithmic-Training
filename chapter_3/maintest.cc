#include <gtest/gtest.h>

int main(int argc, char **argv) {
	testing::GTEST_FLAG(filter) = "Example3_3Test.*";
	testing::InitGoogleTest(&argc, argv);
	return RUN_ALL_TESTS();
}
