#include "basic6_5.h"
using namespace std;


int PreLoopBTNodeWithParent(BTNodeWithParent *bt, BTNodeWithParent *bt_parent) {
    if(nullptr != bt) {
        bt->parent = bt_parent;
        PreLoopBTNodeWithParent(bt->lchild, bt);
        PreLoopBTNodeWithParent(bt->rchild, bt);
        return 0;
    } else {
        return 1;
    }
}