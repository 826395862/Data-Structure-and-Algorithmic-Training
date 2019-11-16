#include "example6_5.h"
#include <stdio.h>
#include <algorithm>
using namespace std;

typedef struct BTNodeQueue
{
    BTNode *data[MAX_SIZE];
    int level[MAX_SIZE];
    int front;
    int rear;
}BTNodeQueue;

int EnBTNodeQueue(BTNodeQueue &btnode_queue, BTNode *btnode, int level) {
    if(btnode_queue.front == btnode_queue.rear + 1 || btnode_queue.front > MAX_SIZE - 1) {
        printf("BTNodeQueue can't enbtnode!\n");
        return -1;
    }
    btnode_queue.data[btnode_queue.rear] = btnode;
    btnode_queue.level[btnode_queue.rear] = level;
    btnode_queue.rear++;
    return 0;
}

int DeBTNodeQueue(BTNodeQueue &btnode_queue, BTNode *&btnode, int &level) {
    if(btnode_queue.front == btnode_queue.rear || btnode_queue.rear > MAX_SIZE - 1) {
        printf("BTNodeQueue can't debtnode!\n");
        return -1;
    }
    btnode = btnode_queue.data[btnode_queue.front];
    level = btnode_queue.level[btnode_queue.front];
    btnode_queue.front++;
    return 0;
}

int SearchWildOfTree(BTNode *bt, int &wild) {
    if(nullptr != bt) {
        BTNodeQueue btnode_queue;
        int btnode_dequeue_level,child_btnode_level;
        BTNode *btnode_dequeue = nullptr;

        btnode_queue.front = 0;
        btnode_queue.rear = 0;
        EnBTNodeQueue(btnode_queue, bt, 0);

        while (btnode_queue.front != btnode_queue.rear) {
            DeBTNodeQueue(btnode_queue, btnode_dequeue, btnode_dequeue_level);
            child_btnode_level = btnode_dequeue_level + 1;
            if(nullptr != btnode_dequeue->lchild) {
                EnBTNodeQueue(btnode_queue, btnode_dequeue->lchild, child_btnode_level);
            }
            if(nullptr != btnode_dequeue->rchild) {
                EnBTNodeQueue(btnode_queue, btnode_dequeue->rchild, child_btnode_level);
            }
        }

        int max_wild = 0;
        int level_wild = 0;
        int level = btnode_queue.level[0];

        for(int i = 0; i < btnode_queue.rear; i++) {
            if(btnode_queue.level[i] != level) {
                max_wild = max(max_wild, level_wild);
                level_wild = 0;
                level = btnode_queue.level[i];
            }
            level_wild++;
        }

        wild = max_wild;
        return 0;
    } else {
        return -1;
    }
}