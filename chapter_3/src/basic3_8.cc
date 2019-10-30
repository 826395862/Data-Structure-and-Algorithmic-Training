#include "basic3_8.h"

int EnCycleQueueWithTagInRear(CycleQueueWithTag &cycle_queue_with_tag, int push_elem) {
    if(cycle_queue_with_tag.front == cycle_queue_with_tag.rear && cycle_queue_with_tag.tag != 0) {
        return 0;
    } else {
        cycle_queue_with_tag.rear = (cycle_queue_with_tag.rear + 1) % MAX_SIZE;
        cycle_queue_with_tag.data[cycle_queue_with_tag.rear] = push_elem;
        if(0 == cycle_queue_with_tag.tag) {
            cycle_queue_with_tag.tag = 1;
        }
        return 1;
    }
}

int DeCycleQueueWithTagInFront(CycleQueueWithTag &cycle_queue_with_tag, int &pop_elem) {
    if(0 == cycle_queue_with_tag.tag) {
        return 0;
    } else {
        cycle_queue_with_tag.front = (cycle_queue_with_tag.front + 1) % MAX_SIZE;
        pop_elem = cycle_queue_with_tag.data[cycle_queue_with_tag.front];
        if(cycle_queue_with_tag.front == cycle_queue_with_tag.rear) {
            cycle_queue_with_tag.tag = 0;
        }
        return 1;
    }
}
