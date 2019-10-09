#pragma once

#include "datatype.h"

Sqlist MergeSqlist(const Sqlist &sqlist_a, const Sqlist &sqlist_b);
int MergeArray(int *int_array_a, int length_a, int *int_array_b, int length_b, int *int_array_c, int length_c);
void SortMergeSqlist(int m, int n, Sqlist &sqlist);
void SortMergeArray(int m, int n, int *);
