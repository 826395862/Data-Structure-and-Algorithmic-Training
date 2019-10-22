#include "example3_2.h"
#include "datatype.h"
int cal(char *str) {
    int length = 0;
    int i = 0;
    while(str[i] != '\0') {
        i++;
    }
    length = i;

    SqStack sqstack = {{0}, -1};
    int left_temp,right_temp;
    
    for(int i = 0; i < length; i++) {
        if(str[i] >= '0' && str[i] <= '9') {
            push(sqstack, str[i] - '0');
        } else {
            pop(sqstack, right_temp);
            pop(sqstack, left_temp);
            push(sqstack, AopaB(left_temp, right_temp, str[i]));
        }
    }

    return sqstack.data[0];
}

int AopaB(int A,int B,char opa) {
    switch (opa) {
    case '*':
        return A * B;
    case '/':
        return A / B;
    case '+':
        return A + B;
    case '-':
        return A - B;
    default:
        return 0;
    }

}
