#include "example2-2.h"

int DeleteElem(Sqlist &list, int position, int &delete_element) {
	if(position >= list.length || position < 0) {
		return 0;
	} else {
		delete_element = list.data[position];

		for(int i = position; i < list.length - 1; i++) {
			list.data[position] = list.data[position + 1];
		}
		list.length--;
		return 1;
	}
}
