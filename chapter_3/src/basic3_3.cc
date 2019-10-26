#include "basic3_3.h"

int IsValidIOSequence (char *io_sequence) {
    SqStack sqstack;
    InitSqstack(sqstack);
    int pop_elem;

    while (*io_sequence != '\0') {
        if('I' == *io_sequence) {
            push(sqstack, 1);
            io_sequence++;
        } else if('O' == *io_sequence) {
            if(!pop(sqstack, pop_elem)) {
                return 0;
            }
            io_sequence++;
        } else {
            return -1;
        }
    }
    
    if(IsEmptySqstack(sqstack)) {
        return 1;
    } else {
        return 0;
    }
}