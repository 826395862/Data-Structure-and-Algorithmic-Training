#include "real6_1.h"
using namespace std;

BTNodeChar* CreatBT(char *pre, int l1, int r1, char *in, int l2, int r2)  {
    if(l1>r1) {
        return nullptr;
    }

    if(l1==r1) {
        BTNodeChar *bt = new BTNodeChar;
        bt->data = pre[l1];
        return bt;
    }
    
    int i = l2;
    while(pre[l1] != in[i]) { 
        ++i;
    }
    BTNodeChar *bt = new BTNodeChar;
    bt->data = pre[l1];
    bt->lchild = CreatBT(pre, l1 + 1, l1 + i - l2, in, l2, i - 1);
    bt->rchild = CreatBT(pre, l1 + i - l2 + 1, r1, in, i + 1, r2);
    return bt;
}