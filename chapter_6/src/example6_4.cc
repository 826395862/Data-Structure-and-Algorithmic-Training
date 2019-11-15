#include "example6_4.h"


int PickElemPreErgodic(BTNode *bt, int number, int &elem) {
    if(number <= 0 || nullptr == bt) {
        return -1;
    }

    BTNodeStack btnode_stack;
    BTNode *btnode_temp = nullptr;
    InitBTNodeStack(btnode_stack);
    PushBTNodeStack(btnode_stack, bt);

    while (-1 != btnode_stack.top) {
        PopBTNodeStack(btnode_stack, btnode_temp);
        number--;
        if(0 == number) {
            elem = btnode_temp->data;
            return 0;
        }

        if(nullptr != btnode_temp->rchild) {
            PushBTNodeStack(btnode_stack, btnode_temp->rchild);
        }
        if(nullptr != btnode_temp->lchild) {
            PushBTNodeStack(btnode_stack, btnode_temp->lchild);
        }
    }

    return -1;
}