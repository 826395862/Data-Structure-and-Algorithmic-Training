#include "think3_2.h"
#include <gtest/gtest.h>
#include <iostream>
using namespace std;

TEST(think3_2test, test) {
    char char_set[5] = {'a', 'b', 'c', 'r'};
    vector <vector<char>> full_sort_sqlist;
    EXPECT_EQ(1, FullSort(char_set, 3, 4,full_sort_sqlist));
    for(int i = 0; i < full_sort_sqlist.size(); ++i) {
        for(int j = 0; j < full_sort_sqlist[i].size(); ++j) {
            cout << full_sort_sqlist[i][j] << ' ';
        }
        cout << endl;
    }
}