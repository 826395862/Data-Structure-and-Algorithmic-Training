#include "thinkingquestion.h"
#include <iostream>

using namespace std;

/*thinking question 1*/
int FindMinElementInSqlist(Sqlist &sqlist, int &temp) {
    temp = sqlist.data[0];
    
    for(int i = 0; i < sqlist.length; i++) {
        if(sqlist.data[i] < temp) {
            temp = sqlist.data[i];
        }
    }

    return temp;
}

/*thinking question 2*/
void ReversePrintLinkedlist(LNode *linkedlist) {
    LNode *p = linkedlist;
    int length = 0;
    
    while (p->next != nullptr) {
        length++;
        p = p->next;
    }

    for(int i = length - 1; i >= 0; i--) {
        p = linkedlist;
        for(int j = 0; j <= i; j++) {
            p = p->next;
        }
        cout << p->data << " ";
    }
    cout << endl;    
}

/*thinking question 3*/

/*thinking question 4*/
int Compare(Sqlist &sqlist_left, Sqlist &sqlist_right) {
    int length = min(sqlist_left.length, sqlist_right.length);
    
    for(int i = 0; i < length; i++) {
        if(sqlist_left.data[i] > sqlist_right.data[i]) {
            return 1;
        } else if(sqlist_left.data[i] < sqlist_right.data[i]) {
            return -1;
        }
    }

    if(sqlist_left.length > sqlist_right.length) {
        return 1;
    } else if(sqlist_left.length < sqlist_right.length) {
        return -1;
    }

    return 0;
}
