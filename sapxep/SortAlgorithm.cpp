#include <iostream>
#include "SortAlgorithm.h"

using namespace std;

typedef ;

void BubbleSort(int A[], int n, bool (*compareFunc)(int, int))
{
    for (int i = 0; i < n - 1; i++)
        for (int j = 0; j < n - i - 1; j++)
            if (compareFunc(A[j], A[j + 1]))
                swap(A[j], A[j + 1]); // ??i ch? A[j] v� A[j + 1]
}

void SelectionSort(int A[], int n, bool (*compareFunc)(int, int))
{
    int index;
    for (int i = 0; i < n - 1; i++)
    {
        index = i; // t?m th?i xem A[i] l� nh? nh?t
        // T�m ph?n t? lon nh?t trong ?o?n t? A[i] ??n A[n - 1]
        for (int j = i + 1; j < n; j++)
            if (compareFunc(A[index], A[j])) // A[j] m� lon h?n A[min] th� A[j] l� nh? nh?t
                index = j; // l?u l?i v? tr� A[max] m?i v?a t�m ???c
        if (index != i) // n?u nh? A[min] kh�ng ph?i l� A[i] ban ??u th� ??i ch?
            swap(A[i], A[index]);
    }
}

void InsertionSort(int A[], int n, bool (*compareFunc)(int, int))
{
    int pos, x;
    for (int i = 1; i < n; i++)
    {
        x = A[i]; // l?u l?i gi� tr? c?a x tr�nh b? ghi ?� khi d?ch chuy?n c�c ph?n t?
        pos = i - 1;
        // t�m v? tr� th�ch h?p ?? ch�n x
        while (pos >= 0 && compareFunc(A[pos], x))
        {
            // k?t h?p v?i d?ch chuy?n ph?n t? sang ph?i ?? ch?a ch? cho x
            A[pos + 1] = A[pos];
            pos--;
        }
        // ch�n x v�o v? tr� ?� t�m ???c
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
