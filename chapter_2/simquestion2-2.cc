#include "simquestion2-2.h"
#include "datatype.h"
#include "malloc.h"

//Time Complexity O(m*n)
void SubLinkedlist(LNode *&source_linkedlist, LNode*& sub_linkedlist) {
	LNode *p, *q, *temp;
	p = source_linkedlist;
	while(p->next != NULL) {
		for(q = sub_linkedlist->next; q != NULL; q = q->next) {
			if(p->next->data == q->data) {
				temp = p->next;
				p->next = p->next->next;
				delete(temp);
				break;
			}
            if(q->next == NULL) {
        		p = p->next;
            }
		}
	}
}

//Time Complexity O(m+n)
void SubLinkedlistAlgorithm2(LNode *&source_linkedlist, LNode*& sub_linkedlist) {
	LNode *p, *q, *temp;
	p = source_linkedlist;
	q = sub_linkedlist->next;

	while(p->next != nullptr && q != nullptr) {
		if(p->next->data < q->data) {
			p = p->next;
		} else if (p->next->data > q->data) {
			q = q->next;
		} else {
			temp = p->next;
			p->next = p->next->next;
			free(temp);
		}
	}
}
