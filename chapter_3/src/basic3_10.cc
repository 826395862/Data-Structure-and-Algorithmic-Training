#include "basic3_10.h"
#include "datatype.h"

int BracketsPair(char *char_set) {
    SqStack sqstack;
    InitSqstack(sqstack);
    while ('\0' != *char_set) {
        if('\'' == *char_set) {
            char_set++;
            while('\'' != *char_set && '\0' != *char_set) {
                char_set++;
            }
            char_set++;
        } else if('"' == *char_set) {
            char_set++;
            while('"' != *char_set && '\0' != *char_set) {
                char_set++;
            }
            char_set++;
        } else if('{' == *char_set || '[' == *char_set || '(' == *char_set) {
            push(sqstack, *char_set);
            char_set++;
        } else if('}' == *char_set || ']' == *char_set || ')' == *char_set) {
            int pop_elem;
            if(0 == pop(sqstack, pop_elem)) {
                return 0;
            } else {
                if('}' == *char_set) {
                    if('{' == pop_elem) {
                        char_set++;
                        continue;
                    } else {
                        return 0;
                    }
                } else if(']' == *char_set) {
                    if('[' == pop_elem) {
                        char_set++;
                        continue;
                    } else {
                        return 0;
                    }
                } else if(')' == *char_set) {
                    if('(' == pop_elem) {
                        char_set++;
                        continue;
                    } else {
                        return 0;
                    }
                }
            }
        }
    }

    if(IsEmptySqstack(sqstack)) {
        return 1;
    } else {
        return 0;
    }
}