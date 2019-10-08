#include "simquestion2-1.h"
#include "datatype.h"
#include <gtest/gtest.h>
#include "creat_random_list.h"

class TestMergeSqlist : public testing::Test {
public:
	static Sqlist sqlist_a, sqlist_b, sqlist_c;

};

Sqlist TestMergeSqlist::sqlist_a = CreatRandomSqlist(0, 20, 10);
Sqlist TestMergeSqlist::sqlist_b = CreatRandomSqlist(0, 20, 6);
Sqlist TestMergeSqlist::sqlist_c;
int main() {
	PrintSqlist(TestMergeSqlist::sqlist_a);
	PrintSqlist(TestMergeSqlist::sqlist_b);
	SortSqlist(TestMergeSqlist::sqlist_a);
    SortSqlist(TestMergeSqlist::sqlist_b);
    TestMergeSqlist::sqlist_c = MergeSqlist(TestMergeSqlist::sqlist_a, TestMergeSqlist::sqlist_b);
    PrintSqlist(TestMergeSqlist::sqlist_a);
    PrintSqlist(TestMergeSqlist::sqlist_b);
    PrintSqlist(TestMergeSqlist::sqlist_c);
    SortMergeSqlist(10, 6, TestMergeSqlist::sqlist_c);
    PrintSqlist(TestMergeSqlist::sqlist_c);
}
