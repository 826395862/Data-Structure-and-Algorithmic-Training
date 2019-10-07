#pragma once

#define MAX_SIZE 100

typedef struct
{
	int data[MAX_SIZE];
	int length = 0;
}Sqlist;

typedef struct LNode
{
	int data;
	LNode *next;
}LNode;

LNode *CreatLinkedList(Sqlist &sqlist);
