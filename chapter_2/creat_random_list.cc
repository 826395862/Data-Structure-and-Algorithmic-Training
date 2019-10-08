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

void SortSqlist(Sqlist &sqlist) {
	for(int i = sqlist.length - 1; i > 0; i--) {
		for(int j = 0; j < i; j++) {
			if(sqlist.data[j] > sqlist.data[j+1]) {
				swap(sqlist.data[j], sqlist.data[j+1]);
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
