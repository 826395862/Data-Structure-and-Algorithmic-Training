#include "example3_1.h"

int IsMatchAboutBrackets(char *input_str, int n) {
    SqStack sqstack;
    sqstack.top = -1;
    
    if(0 == n) {
        return 1;
    }
    for(int i = 0; i < n; i++) {
        if(sqstack.top < -1) {
            return 0;
        }
        
        if('(' == input_str[i]) {
            sqstack.top ++;
        } else if(')' == input_str[i]) {
            sqstack.top --;
        }
    }

    if(-1 == sqstack.top) {
        return 1;
    } else {
        return 0;
    }
}