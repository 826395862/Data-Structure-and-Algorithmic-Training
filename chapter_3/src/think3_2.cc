#include "think3_2.h"

using namespace std;
int FullSort(char *char_set, int k, int char_set_length, vector <vector <char>>& full_sort_sqlist) {
    if(k >= char_set_length || k < 0 || char_set_length < 0) {
        return 0;
    } else if(k == 0) {
        vector <char> sqlist_temp;
        for(int i = 0; i < char_set_length; ++i) {
            sqlist_temp.push_back(char_set[i]);
        }
        full_sort_sqlist.push_back(sqlist_temp);
        return 1;
    } else {
        for(int i = 0; i <= k; ++i) {
            swap(char_set[i], char_set[k]);
            FullSort(char_set, k - 1, char_set_length, full_sort_sqlist);
            swap(char_set[i], char_set[k]);
        }
        return 1;
    }
}