#pragma once

void BubbleSort(int A[], int n, bool (*compareFunc)(int, int));
void SelectionSort(int A[], int n, bool (*compareFunc)(int, int));
void InsertionSort(int A[], int n, bool (*compareFunc)(int, int));

bool SortIncrement(int a, int b);
bool SortDecrement(int a, int b);