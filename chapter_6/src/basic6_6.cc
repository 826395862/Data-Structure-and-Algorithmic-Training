#include "basic6_6.h"
using namespace std;


int FullBtreePreSetToPostSet(Sqlist &pre_set, int begin_index, int end_index, Sqlist &post_set, int post_begin_index, int post_end_index) {
    if(end_index - begin_index == post_end_index - post_begin_index && end_index >= begin_index) {
        post_set.data[post_end_index] = pre_set.data[begin_index];
        
        int son_tree_node_number = (end_index - begin_index) / 2;
        FullBtreePreSetToPostSet(pre_set, begin_index + 1, begin_index + son_tree_node_number, post_set, post_begin_index, post_begin_index + son_tree_node_number - 1);
        FullBtreePreSetToPostSet(pre_set, begin_index + son_tree_node_number + 1, end_index, post_set, post_begin_index + son_tree_node_number, post_end_index - 1);
        return 0;
    } else {
        return 1;
    }
}