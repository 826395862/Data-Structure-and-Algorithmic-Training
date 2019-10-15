#include "appquestion.h"
#include "datatype.h"

/*Question1*/
int FindElemNumToEndInLinkedlist(LNode *linkedlist,int num_to_end) {
    int length = 0;
    LNode *p = linkedlist->next;
    while (p != nullptr) {
        length++;
        p = p->next;
    }
    
    if(num_to_end > length || num_to_end <= 0)
    return -1;

    p = linkedlist;
    for(int i = 0; i <= length - num_to_end; i++) {
        p = p->next;
    }
    return p->data;
}

/*Question2*/
int RotateLeftSqlist(Sqlist &sqlist, int length) {
    if(length < 0 || length >= sqlist.length) {
        return -1;
    }

    ReverseSqlistPos_mToPos_n(sqlist, 0, length - 1);
    ReverseSqlistPos_mToPos_n(sqlist, length, sqlist.length - 1);
    ReverseSqlistPos_mToPos_n(sqlist, 0, sqlist.length - 1);
    return 0;
}

/*Question3*/
int FindMainElemInSqlist(Sqlist &sqlist) {
    Sqlist repeat_elem_list = {{0}, 0};
    Sqlist repeat_elem_list_num = {{0}, 0};
    for(int i = 0; i < sqlist.length; i++) {
        int j = 0;
        
        for( ; j < repeat_elem_list.length; j++) {
            if(sqlist.data[i] == repeat_elem_list.data[j]) {
                repeat_elem_list_num.data[j]++;
                break;
            }
        }
        
        if(j == repeat_elem_list.length) {
            repeat_elem_list.length ++;
            repeat_elem_list_num.length ++;
            repeat_elem_list.data[j] = sqlist.data[i];
            repeat_elem_list_num.data[j]++;
        }
    }

    for(int i = 0; i < repeat_elem_list_num.length; i++) {
        if(repeat_elem_list_num.data[i] > sqlist.length / 2) {
            return repeat_elem_list.data[i];
        }
    }

    return -1;
}
