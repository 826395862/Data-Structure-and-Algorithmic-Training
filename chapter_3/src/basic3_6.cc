#include "basic3_6.h"
#include "malloc.h"

int InsertElemInLiqueueWithRear(LNode *&liqueue_cycle_rear_ptr, int insert_elem) {
    LNode *new_qnode = (LNode*)malloc(sizeof(LNode));
    new_qnode->data = insert_elem;

    new_qnode->next = liqueue_cycle_rear_ptr->next;
    liqueue_cycle_rear_ptr->next = new_qnode;
    liqueue_cycle_rear_ptr = new_qnode;
    return 1;
}

int OutElemInLiqueueWithRear(LNode *&liqueue_cycle_rear_ptr, int &Out_elem) {
    if(liqueue_cycle_rear_ptr->next == liqueue_cycle_rear_ptr) {
        return 0;
    } else {
        LNode *free_Qnode;
        free_Qnode = liqueue_cycle_rear_ptr->next->next;
        Out_elem = free_Qnode->data;
        liqueue_cycle_rear_ptr->next->next = free_Qnode->next;
        if(liqueue_cycle_rear_ptr->next == liqueue_cycle_rear_ptr->next->next) {
            liqueue_cycle_rear_ptr = liqueue_cycle_rear_ptr->next;
        }
        free(free_Qnode);
        return 1;
    }
}