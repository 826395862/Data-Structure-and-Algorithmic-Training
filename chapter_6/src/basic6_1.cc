#include "basic6_1.h"
using namespace std;

int ComputeBTNode(BTNode *bt) {
    if(nullptr != bt) {
        return ComputeBTNode(bt->lchild) + 1 + ComputeBTNode(bt->rchild);
    } else {
        return 0;
    }
}