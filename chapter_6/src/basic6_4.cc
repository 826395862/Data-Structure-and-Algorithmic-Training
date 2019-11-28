#include "basic6_4.h"
using namespace std;


int LinkLeafNode(BTNode *bt, BTNode *&head, BTNode *&tail) {
    if(nullptr != bt) {
        if(nullptr == bt->lchild && nullptr == bt->rchild && nullptr == head) {
            head = bt;
            tail = bt;
            return 0;
        }
        if(nullptr == bt->lchild && nullptr == bt->rchild && nullptr != head) {
            tail->rchild = bt;
            tail = bt;
            return 0;
        }
        LinkLeafNode(bt->lchild, head, tail);
        LinkLeafNode(bt->rchild, head, tail);
        return 0;
    } else {
         return 1;
    }
    
}