#include "basic3_9.h"

int DecimalToBinary(int var_decimal) {
    if(var_decimal < 0) {
        return -1;
    } else {
        int result = 0;
        int decimal = 1;
        // SqStack sqstack;
        // InitSqstack(sqstack);

        while (0 != var_decimal) {
            result = result + var_decimal % 2 * decimal;
            var_decimal = var_decimal / 2;
            decimal = decimal * 10;
        }

        return result;
    }
}