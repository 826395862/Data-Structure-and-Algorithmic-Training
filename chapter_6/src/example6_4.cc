#include "example6_4.h"


BTNode* SearchElemPreErgodic(BTNode *bt, int search_elem) {
    if(bt != nullptr) {
        if(search_elem == bt->data) {
            return bt;
        } else if(nullptr != SearchElemPreErgodic(bt->lchild, search_elem)) {
            return SearchElemPreErgodic(bt->lchild, search_elem);
        } else if(nullptr != SearchElemPreErgodic(bt->rchild, search_elem)) {
            return SearchElemPreErgodic(bt->rchild, search_elem);
        } else {
            return nullptr;
        }
    } else {
        return nullptr;
    }
}

BTNode* SearchElemInErgodic(BTNode *bt, int search_elem) {
    if(bt != nullptr) {
        if(nullptr != SearchElemInErgodic(bt->lchild, search_elem)) {
            return SearchElemInErgodic(bt->lchild, search_elem);
        } else if(search_elem == bt->data) {
            return bt;
        } 
        else if(nullptr != SearchElemInErgodic(bt->rchild, search_elem)) {
            return SearchElemInErgodic(bt->rchild, search_elem);
        } else {
            return nullptr;
        }
    } else {
        return nullptr;
    }
}

BTNode* SearchElemPostErgodic(BTNode *bt, int search_elem) {
    if(bt != nullptr) {
        if(nullptr != SearchElemPostErgodic(bt->lchild, search_elem)) {
            return SearchElemPostErgodic(bt->lchild, search_elem);
        } else if(nullptr != SearchElemPostErgodic(bt->rchild, search_elem)) {
            return SearchElemPostErgodic(bt->rchild, search_elem);
        } else if(search_elem == bt->data) {
            return bt;
        } else {
            return nullptr;
        }
    } else {
        return nullptr;
    }
}