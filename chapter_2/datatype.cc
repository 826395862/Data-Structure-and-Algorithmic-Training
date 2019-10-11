/*
 * datatype.cc
 *
 *  Created on: 2019年10月7日
 *      Author: gaoyan
 */

#include "datatype.h"
#include "malloc.h"
#include <iostream>

LNode *CreatLinkedList(Sqlist &sqlist) {
	int lenLNode = sizeof(LNode);
	LNode *head, *p1, *p2;
    head = (LNode*)malloc(lenLNode);
    head->next = NULL;

    if(sqlist.length <= 0)
		return head;

    for(int i = 0; i < sqlist.length; i++) {
    	if(i==0) {
    		p1 = (LNode*)malloc(lenLNode);
    		p1->data = sqlist.data[0];
    		head->next = p1;
    	} else {
    		p2 = (LNode*)malloc(lenLNode);
    		p2->data = sqlist.data[i];
    		p1->next = p2;
    		p1 = p2;
    	}
    }

    p1->next = NULL;
    return head;
}

int DeleteLinkedlist(LNode *&lnode) {
	LNode *temp;
	while(lnode != NULL) {
		temp = lnode;
		lnode = lnode->next;
		delete(temp);
	}

	return 0;
}

void PrintLinkedlist(LNode *lnode) {
	lnode = lnode->next;
	while(lnode != NULL) {
		std::cout << lnode->data << " ";
		lnode = lnode->next;
	}
	std::cout << std::endl;
}

