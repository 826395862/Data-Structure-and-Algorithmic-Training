#include "creat_random_list.h"
#include "datatype.h"
#include <random>
#include <iostream>
using namespace std;

Sqlist CreatRandomSqlist(int min, int max, int length) {
	Sqlist sqlist;
	sqlist.length = length;
	static std::uniform_int_distribution<int> u(min, max);
	static std::default_random_engine e;

	for(int i = 0; i < length; i++) {
		sqlist.data[i] = u(e);
	}

	return sqlist;
}

void CreatRandomArray(int min, int max, int length, int *int_array) {
	static std::uniform_int_distribution<int> u(min, max);
	static std::default_random_engine e;

	for(int i = 0; i < length; i++) {
			int_array[i] = u(e);
	}
}

void SortSqlist(Sqlist &sqlist) {
	for(int i = sqlist.length - 1; i > 0; i--) {
		for(int j = 0; j < i; j++) {
			if(sqlist.data[j] > sqlist.data[j+1]) {
				swap(sqlist.data[j], sqlist.data[j+1]);
			}
		}
	}
}

void SortArray(int *int_array, int length) {
	for(int i = length - 1; i > 0; i--) {
		for(int j = 0; j < i; j++) {
			if(int_array[j] > int_array[j+1]) {
				swap(int_array[j], int_array[j+1]);
			}
		}
	}
}

void PrintSqlist(Sqlist&sqlist) {
	for(int i = 0; i < sqlist.length; i++) {
		cout << sqlist.data[i] <<" ";
	}
	cout << endl;
}

void PrintArray(int *int_array, int length) {
	for(int i = 0; i < length; i++) {
		cout << int_array[i] <<" ";
	}
	cout << endl;
}
