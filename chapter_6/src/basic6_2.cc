#include "basic6_2.h"
using namespace std;

int ComputeLeafNode(BTNode *bt) {
    if(nullptr != bt) {
        if(nullptr == bt->lchild && nullptr == bt->rchild) {
            return 1;
        } else { 
            return ComputeLeafNode(bt->lchild) + ComputeLeafNode(bt->rchild);
        }
    } else {
        return 0;
    }
}