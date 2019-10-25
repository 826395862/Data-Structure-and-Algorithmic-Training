#include "simqu3_2.h"

int PushQueueOfTwoSqstack(SqStack &sqstack1, SqStack &sqstack2, int push_elem) {
    int pop_elem;
    
    if(MAX_SIZE - 1 != sqstack1.top) {
        push(sqstack1, push_elem);
        return 1;
    } else if(IsEmptySqstack(sqstack2)) {

        while (!IsEmptySqstack(sqstack1)) {
            pop(sqstack1, pop_elem);
            push(sqstack2, pop_elem);
        }
        push(sqstack1, push_elem);
        return 1;
    } else {
        return 0;
    }
}

int PopQueueOfTwoSqstack(SqStack &sqstack1, SqStack &sqstack2, int& pop_elem) {
    if(!IsEmptySqstack(sqstack2)) {
        pop(sqstack2, pop_elem);
        return 1;
    } else if(!IsEmptySqstack(sqstack1)) {
        int pop_elem_from_stack1;
        
        while (!IsEmptySqstack(sqstack1)) {
            pop(sqstack1, pop_elem_from_stack1);
            push(sqstack2, pop_elem_from_stack1);
        }
        pop(sqstack2, pop_elem);
        return 1;
    } else {
        return 0;
    }
}

int isEmptyQueueOfTwoSqstack(SqStack &sqstack1, SqStack &sqstack2) {
    if(IsEmptySqstack(sqstack1) && IsEmptySqstack(sqstack2)) {
        return 1;
    } else 
    return 0;
}