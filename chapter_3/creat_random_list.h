#pragma once

#include "datatype.h"

Sqlist CreatRandomSqlist(int min, int max, int length);
void SortSqlist(Sqlist&);
void PrintSqlist(Sqlist&);

void CreatRandomArray(int min, int max, int length, int *int_array);
void SortArray(int *int_array, int length);
void PrintArray(int *int_array, int length);
