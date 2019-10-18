#pragma once
#include "datatype.h"
void InitListStackNohead(LNode *&linkedlist);
bool IsEmptyListStack(LNode *list_stack);
void PushListStack(LNode *&list_stack, int push_elem);
int PopListStack(LNode *&list_stack, int &pop_elem);