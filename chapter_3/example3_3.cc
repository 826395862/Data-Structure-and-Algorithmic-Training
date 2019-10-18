#include "example3_3.h"
#include "datatype.h"
#include <malloc.h>

void InitListStackNohead(LNode *&linkedlist) {
    linkedlist = nullptr;
}

bool IsEmptyListStack(LNode *list_stack) {
    if(nullptr == list_stack) {
        return true;
    } else {
        return false;
    }
}

void PushListStack(LNode *&list_stack, int push_elem) {
    LNode *p = (LNode*)malloc(sizeof(LNode*));
    p->next = nullptr;

    p->data = push_elem;
    p->next = list_stack;
    list_stack = p;
}
int PopListStack(LNode *&list_stack, int &pop_elem) {
    if(nullptr == list_stack) {
        return 0;
    } else {
        LNode *p;
        p = list_stack;
        list_stack = list_stack->next;

        pop_elem = p->data;
        free(p);
        return 1;
    }
}