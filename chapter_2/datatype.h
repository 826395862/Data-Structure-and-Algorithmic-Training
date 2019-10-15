#pragma once

#define MAX_SIZE 10000

typedef struct
{
	int data[MAX_SIZE];
	int length = 0;
}Sqlist;

typedef struct
{
	int data[2][MAX_SIZE];
	int length = 0;
}Sqlist2Mul;

typedef struct LNode
{
	int data;
	LNode *next;
}LNode;

LNode *CreatLinkedList(Sqlist &sqlist);

int DeleteLinkedlist(LNode *&lnode);

void PrintLinkedlist(LNode *lnode);

int ElemInLinkedlist(LNode *, int);

int ReverseSqlistPos_mToPos_n(Sqlist &,int ,int);
