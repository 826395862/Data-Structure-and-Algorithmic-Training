#include "example2-3.h"
#include "malloc.h"

void MergeLNode(LNode *A, LNode *B, LNode *&C) {
	free(A);
	free(B);
	LNode *p = A->next;
	LNode *q = B->next;
	LNode *r = C;
	while(p != NULL && q != NULL) {
		if(p->data <= q->data) {
			r->next = p;
			p = p->next;
			r = r->next;
		} else {
			r->next = q;
			q = q->next;
			r = r->next;
		}
	}

	if(p != NULL) {
		r->next = p;
	}

	if(q != NULL) {
		r->next = q;
	}
}

int DeleteElementInLinkedlist(LNode *&L_node, int element) {
	LNode *p = L_node;

	while(p->next != NULL) {
		if(p->next->data == element) {
			break;
		}
		p = p->next;
	}

	if(p->next != NULL) {
		LNode *Lnode_delete;
		Lnode_delete = p->next;
		p->next = p->next->next;
		free(Lnode_delete);
		return 1;
	} else {
		return 0;
	}
}
