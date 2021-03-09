#include <iostream>
#include "SortAlgorithm.h"

using namespace std;

typedef ;

void BubbleSort(int A[], int n, bool (*compareFunc)(int, int))
{
    for (int i = 0; i < n - 1; i++)
        for (int j = 0; j < n - i - 1; j++)
            if (compareFunc(A[j], A[j + 1]))
                swap(A[j], A[j + 1]); // ??i ch? A[j] và A[j + 1]
}

void SelectionSort(int A[], int n, bool (*compareFunc)(int, int))
{
    int index;
    for (int i = 0; i < n - 1; i++)
    {
        index = i; // t?m th?i xem A[i] là nh? nh?t
        // Tìm ph?n t? lon nh?t trong ?o?n t? A[i] ??n A[n - 1]
        for (int j = i + 1; j < n; j++)
            if (compareFunc(A[index], A[j])) // A[j] mà lon h?n A[min] thì A[j] là nh? nh?t
                index = j; // l?u l?i v? trí A[max] m?i v?a tìm ???c
        if (index != i) // n?u nh? A[min] không ph?i là A[i] ban ??u thì ??i ch?
            swap(A[i], A[index]);
    }
}

void InsertionSort(int A[], int n, bool (*compareFunc)(int, int))
{
    int pos, x;
    for (int i = 1; i < n; i++)
    {
        x = A[i]; // l?u l?i giá tr? c?a x tránh b? ghi ?è khi d?ch chuy?n các ph?n t?
        pos = i - 1;
        // tìm v? trí thích h?p ?? chèn x
        while (pos >= 0 && compareFunc(A[pos], x))
        {
            // k?t h?p v?i d?ch chuy?n ph?n t? sang ph?i ?? ch?a ch? cho x
            A[pos + 1] = A[pos];
            pos--;
        }
        // chèn x vào v? trí ?ã tìm ???c
        A[pos + 1] = x;
    }
}

bool SortIncrement(int a, int b)
{
    return a > b;
}

bool SortDecrement(int a, int b)
{
    return a < b;
}
