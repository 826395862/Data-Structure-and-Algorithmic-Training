#pragma once

#define MAX_SIZE 100

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

typedef struct QNode
{
	int data;
	QNode *next;
}QNode;

typedef struct 
{
	int data[MAX_SIZE];
	int top;
}SqStack;

typedef struct 
{
	int data[MAX_SIZE];
	int top[2];
}ShareStack;

typedef struct SqQueue
{
	int data[MAX_SIZE];
	int front;
	int rear;
	
}SqQueue;

typedef struct CycleQueue
{
	int data[MAX_SIZE];
	int front;
	int rear;
	
}CycleQueue;

typedef struct CycleQueueWithTag
{
	int data[MAX_SIZE];
	int front;
	int rear;
	int tag;
	
}CycleQueueWithTag;

typedef struct {
	LNode *front;
	LNode *rear;
}LiQueue;



LNode *CreatLinkedList(Sqlist &sqlist);

int DeleteLinkedlist(LNode *&lnode);

void PrintLinkedlist(LNode *lnode);

int ElemInLinkedlist(LNode *, int);

int ReverseSqlistPos_mToPos_n(Sqlist &,int ,int);

void InitSqstack(SqStack &);

int push(SqStack &, int);

int pop(SqStack &,int &);

int IsEmptySqstack(SqStack &);

void InitSqQueue(SqQueue &);

void InitCycleQueue(CycleQueue &);

int IsEmptyCycleQueue(CycleQueue );

void InitCycleQueueWithTag(CycleQueueWithTag &);
