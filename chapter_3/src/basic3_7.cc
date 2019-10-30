#include "basic3_7.h"

int DeCycleQueueInRear(CycleQueue &cycle_queue, int &pop_elem) {
    if(IsEmptyCycleQueue(cycle_queue)) {
        return 0;
    } else {
        pop_elem = cycle_queue.data[cycle_queue.rear];
        cycle_queue.rear = (cycle_queue.rear - 1 + MAX_SIZE) % MAX_SIZE;
        return 1;
    }
}

int EnCycleQueueInFront(CycleQueue &cycle_queue, int push_elem) {
    if(cycle_queue.front == (cycle_queue.rear + 1) % MAX_SIZE ) {
        return 0;
    } else {
        cycle_queue.data[cycle_queue.front] = push_elem;
        cycle_queue.front = (cycle_queue.front - 1 + MAX_SIZE) % MAX_SIZE;
        return 1;
    }
}
