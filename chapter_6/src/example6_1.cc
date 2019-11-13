#include "example6_1.h"

int compute_in_char_opr(char opr, int lchild_value, int rchild_value);

int ComputeExpressionInBT(BTNodeChar *bt_char) {
    if(bt_char->lchild != nullptr && bt_char->rchild != nullptr) {
        int lchild_value = ComputeExpressionInBT(bt_char->lchild);
        int rchild_value = ComputeExpressionInBT(bt_char->rchild);
        return compute_in_char_opr(bt_char->data, lchild_value, rchild_value);
    } else {
        return bt_char->data - '0';
    }
} 

int compute_in_char_opr(char opr, int lchild_value, int rchild_value) {
    switch (opr)
    {
    case '+':
        return lchild_value + rchild_value; 
    case '*':
        return lchild_value * rchild_value; 
    case '-':
        return lchild_value - rchild_value; 
    case '/':
        return lchild_value / rchild_value; 
    default:
        return -1;
    }
}
