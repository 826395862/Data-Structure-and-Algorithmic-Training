#include "example2-1.h"

int FindElemPosition(Sqlist &list, int element) {
	for(int i = 0; i < list.length; i++) {
		if(element <= list.data[i]) {
			return i;
		}
	}
	return list.length;
}

void InsertElem(Sqlist &list, int element) {
	int position = FindElemPosition(list, element);

	for(int i = list.length - 1; i >= position; i--) {
		list.data[i+1] = list.data[i];
	}

	list.data[position] = element;
	list.length ++;
}


