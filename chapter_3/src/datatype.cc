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
    head->next = nullptr;

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

    p1->next = nullptr;
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

int ElemInLinkedlist(LNode *linkedlist, int pos) {
	LNode *p = linkedlist;
	for(int i = 0; i <= pos; i++) {
		p = p->next;
	}
	return p->data;
}

int ReverseSqlistPos_mToPos_n(Sqlist &sqlist, int m, int n) {
	int temp;
	if(m > n || m < 0 || n > sqlist.length - 1) {
		return -1;
	}

	for(int i = m; i < (n + m + 1) / 2; i++) {
		temp = sqlist.data[i];
		sqlist.data[i] = sqlist.data[m + n -i];
		sqlist.data[m + n - i] = temp;
	}
	return 0;
}

void InitSqstack(SqStack &sqstack) {
	sqstack.top = -1;
}

int push(SqStack &sqstack, int push_elem) {
	if(sqstack.top == MAX_SIZE - 1 || sqstack.top < -1) {
		return 0;
	}
	++sqstack.top;
	sqstack.data[sqstack.top] = push_elem;
	return 1;
}

int pop(SqStack &sqstack,int &pop_elem) {
	if(sqstack.top <= -1 || sqstack.top > MAX_SIZE - 1) {
		return 0;
	}
	pop_elem = sqstack.data[sqstack.top];
	sqstack.top--;
	return 1;
}

int IsEmptySqstack(SqStack &sqstack) {
	if(-1 == sqstack.top) {
		return 1;
	} else
	return 0;
}

void InitSqQueue(SqQueue &sq_queue) {
	sq_queue.front = -1;
	sq_queue.rear = -1;
}

void InitCycleQueue(CycleQueue &cycle_queue) {
	cycle_queue.front = -1;
	cycle_queue.rear = -1;
}

int IsEmptyCycleQueue(CycleQueue cycle_queue) {
	if(cycle_queue.front == cycle_queue.rear) {
		return 1;
	} else {
		return 0;
	}
}

void InitCycleQueueWithTag(CycleQueueWithTag &cycle_queue_with_tag) {
	cycle_queue_with_tag.front = -1;
	cycle_queue_with_tag.rear = -1;
	cycle_queue_with_tag.tag = 0;
}
