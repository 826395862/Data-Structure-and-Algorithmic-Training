#include "simquestion2-1.h"
#include "datatype.h"
#include <gtest/gtest.h>
#include "creat_random_list.h"
#include <iostream>

using namespace std;

class TestMergeSqlist : public testing::Test {
public:
	static Sqlist sqlist_a, sqlist_b, sqlist_c;
	static int *int_array_a, *int_array_b, *int_array_c;

};

Sqlist TestMergeSqlist::sqlist_a = CreatRandomSqlist(0, 20, 10);
Sqlist TestMergeSqlist::sqlist_b = CreatRandomSqlist(0, 20, 6);
Sqlist TestMergeSqlist::sqlist_c;

int *TestMergeSqlist::int_array_a = new int[10];
int *TestMergeSqlist::int_array_b = new int[6];
int *TestMergeSqlist::int_array_c = new int[16];

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

    cout << endl;
    CreatRandomArray(0, 20, 10, TestMergeSqlist::int_array_a);
    CreatRandomArray(0, 20, 6, TestMergeSqlist::int_array_b);
    SortArray(TestMergeSqlist::int_array_a, 10);
    SortArray(TestMergeSqlist::int_array_b, 6);
    PrintArray(TestMergeSqlist::int_array_a, 10);
    PrintArray(TestMergeSqlist::int_array_b, 6);
    MergeArray(TestMergeSqlist::int_array_a, 10, TestMergeSqlist::int_array_b, 6, TestMergeSqlist::int_array_c, 16);
    PrintArray(TestMergeSqlist::int_array_a, 10);
    PrintArray(TestMergeSqlist::int_array_b, 6);
    PrintArray(TestMergeSqlist::int_array_c, 16);

    delete []TestMergeSqlist::int_array_a;
    delete []TestMergeSqlist::int_array_b;
    delete []TestMergeSqlist::int_array_c;
}
