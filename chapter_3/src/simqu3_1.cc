#include "datatype.h"
#include "simqu3_1.h"

int PushShareStack(ShareStack &share_stack, int stack_num, int push_elem) {
    if(0 == stack_num) {
        if(share_stack.top[0] + 1 == share_stack.top[1]) {
            return 0;
        } else {
            ++share_stack.top[0];
            share_stack.data[share_stack.top[0]] = push_elem;
            return 1;
        }
    } else if(1 == stack_num) {
        if(share_stack.top[0] + 1 == share_stack.top[1]) {
            return 0;
        } else {
            --share_stack.top[1];
            share_stack.data[share_stack.top[1]] = push_elem;
            return 1;
        }
    }

    return -1;
}

int PopShareStack(ShareStack &share_stack, int stack_num, int &pop_elem) {
    if(0 == stack_num) {
        if(-1 == share_stack.top[0]) {
            return 0;
        } else {
            pop_elem = share_stack.data[share_stack.top[0]];
            share_stack.top[0]--;
            return 1;
        }
    } else if(1 == stack_num) {
        if(MAX_SIZE == share_stack.top[1]) {
            return 0;
        } else {
            pop_elem = share_stack.data[share_stack.top[1]];
            share_stack.top[1]++;
            return 1;
        }
    }

    return -1;
    
}

void InitShareStack(ShareStack &share_stack) {
    share_stack.top[0] = -1;
    share_stack.top[1] = MAX_SIZE;
}