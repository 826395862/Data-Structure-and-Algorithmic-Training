#include "think3_1.h"
#include <math.h>
float sqrt_recur(float A, float p, float e) {
    if(abs(A - p * p) < e) {
        return p;
    } else {
        p = sqrt_recur(A, (p + A / p) / 2, e);
        return p;
    }
}

float sqrt_cycle(float A, float p, float e) {
    while(abs(A - p * p) >= e) {
        p = (p + A / p) / 2;
    }
    return p;
}