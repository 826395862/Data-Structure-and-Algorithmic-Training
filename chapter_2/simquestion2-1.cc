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

int MergeArray(int *int_array_left, int length_left, int *int_array_right, int length_right, int *int_array_c, int length_c) {
	if(length_c != length_left + length_right) {
		return -1;
	}

	for(int i = 0; i < length_left; i++) {
		int_array_c[i] = int_array_left[i];
	}

	for(int j = 0; j < length_right; j++) {
		int_array_c[j + length_left] = int_array_right[j];
	}
	return 0;
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
