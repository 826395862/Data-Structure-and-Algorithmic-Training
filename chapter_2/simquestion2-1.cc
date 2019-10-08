#include "simquestion2-1.h"
#include "datatype.h"

Sqlist MergeSqlist(const Sqlist &sqlist_left, const Sqlist &sqlist_right) {
	Sqlist sqlist_tank;
	sqlist_tank.length = sqlist_left.length + sqlist_right.length;

	for(int i = 0; i < sqlist_left.length; i++) {
		sqlist_tank.data[i] = sqlist_left.data[i];
	}

	for(int j = 0; j < sqlist_right.length; j++) {
		sqlist_tank.data[j + sqlist_left.length] = sqlist_right.data[j];
	}

	return sqlist_tank;
}

void SortMergeSqlist(int m, int n, Sqlist &sqlist) {
	Sqlist sqlist_tank = {{}, sqlist.length};
	int sqlist_tank_index = 0;
	int i = 0, j = 0;

	for(; i < m && j < n;) {
		if(sqlist.data[i] < sqlist.data[m+j]) {
			sqlist_tank.data[sqlist_tank_index] = sqlist.data[i];
			i++;
		} else {
			sqlist_tank.data[sqlist_tank_index] = sqlist.data[m+j];
			j++;
		}
		sqlist_tank_index++;
	}

	if(i < m) {
		for(; i < m; i++) {
			sqlist_tank.data[sqlist_tank_index] = sqlist.data[i];
			sqlist_tank_index++;
		}
	} else if (j < n) {
		for(; j < n; i++) {
			sqlist_tank.data[sqlist_tank_index] = sqlist.data[m+j];
			sqlist_tank_index++;
		}
	}

	sqlist = sqlist_tank;
}
