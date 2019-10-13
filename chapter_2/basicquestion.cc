#include "basicquestion.h"

#include <iostream>
using namespace std;

/*Question3*/
void ReverseSqlist(Sqlist &sqlist) {
    int temp;
    for(int i = 0; i < sqlist.length / 2; i++) {
        swap(sqlist.data[i], sqlist.data[sqlist.length - 1 -i]);
    }
}

/*Question4*/
void DeleteElemsInSqlist(Sqlist &sqlist, int begin_pos, int end_pos) {
    int move_forward_length = end_pos - begin_pos + 1;
    int move_elem_num = sqlist.length - 1 - end_pos;
    
    for(int i = begin_pos, j = 0; j < move_elem_num; i++,j++) {
        sqlist.data[i] = sqlist.data[i + move_forward_length];
    }
    
    sqlist.length = sqlist.length - move_forward_length;
}

/*Question5*/
void DivideAccordingHeadElem(Sqlist &sqlist) {
    int head_elem = sqlist.data[0];
    int head_elem_pos = 0;
    int temp;
    for(int i = 1; i < sqlist.length; i++) {
        if(sqlist.data[i] < head_elem) {
            temp = sqlist.data[i];

            for(int j = i - 1; j >= head_elem_pos; j--) {
                sqlist.data[j+1] =sqlist.data[j];
            }
            sqlist.data[head_elem_pos] = temp;
            head_elem_pos++;
        }
    }
}

/*Question6*/
void DeleteRepeatElemInLinkedlist(LNode *linkedlist) {
    LNode *p = linkedlist->next;
    LNode *temp;
    while (p != nullptr && p->next != nullptr)    //?
    {
        if(p->data == p->next->data) {
            temp = p->next;
            p->next = p->next->next;
            free (temp);
        } else {
        	p = p->next;
        }
    }
}

/*Question7*/
void DeleteMinElemInLinkedList(LNode *linkedlist) {
    LNode *p = linkedlist->next;
    if(linkedlist->next != nullptr) {
        int min_elem = linkedlist->next->data;

        while (p != nullptr) {
            if(p->data < min_elem) {
                min_elem = p->data;
            }
            p = p->next;
        }
        
        int pos = 0;
        p = linkedlist->next;
        while(p != nullptr) {
            if(p->data == min_elem) break;
            pos++;
            p = p->next;
        }

        p = linkedlist;
        
        for(int i = 0; i < pos; i++) {
            p = p->next;
        }
        LNode *temp = p->next;
        p->next = p->next->next;
        free(temp);     
    }  
}

/*Question8*/

void ReverseLinkedlist(LNode *linkedlist) {
    LNode *p = linkedlist->next;
    LNode *L = linkedlist;
    L->next = nullptr;

    LNode *insert_lnode_in_head;
    while (p != nullptr) {
        insert_lnode_in_head = p;
        p = p->next;
        
        insert_lnode_in_head->next = L->next;
        L->next = insert_lnode_in_head;
    }
}

/*Question9*/
void DivideAccordingElemIsOdd(LNode *linkedlist_A, LNode *&linkedlist_B) {
    linkedlist_B = (LNode*)malloc(sizeof(LNode));
    linkedlist_B->next = nullptr;
    LNode *q = linkedlist_B;

    LNode *p = linkedlist_A;
    LNode *temp;
    while (p->next != nullptr) {
        if(p->next->data % 2 == 0) {
            temp = p->next;
            p->next = p->next->next;
            q->next = temp;
            q = q->next;
        } else {
        	p = p->next;
        }
    }
}
