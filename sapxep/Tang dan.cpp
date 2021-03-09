#include <iostream>
using namespace std;
void BubbleSort(int A[], int n)
{
    for (int i = 0; i < n - 1; i++)
        for (int j = 0; j < n - i - 1; j++)
            if (A[j] > A[j + 1])
                swap(A[j], A[j + 1]); // ??i ch? A[j] v� A[j + 1]
}
void SelectionSort(int A[], int n)
{
    int max;
    for (int i = 0; i < n - 1; i++)
    {
        max = i; // t?m th?i xem A[i] l� nh? nh?t
        // T�m ph?n t? lon nh?t trong ?o?n t? A[i] ??n A[n - 1]
        for (int j = i + 1; j < n; j++)
            if (A[j] > A[max]) // A[j] m� lon h?n A[min] th� A[j] l� nh? nh?t
                max = j; // l?u l?i v? tr� A[max] m?i v?a t�m ???c
        if (max != i) // n?u nh? A[min] kh�ng ph?i l� A[i] ban ??u th� ??i ch?
            swap(A[i], A[max]);
    }
}
void InsertionSort(int A[], int n)
{
    int pos, x;
    for (int i = 1; i < n; i++)
    {
        x = A[i]; // l?u l?i gi� tr? c?a x tr�nh b? ghi ?� khi d?ch chuy?n c�c ph?n t?
        pos = i - 1;
        // t�m v? tr� th�ch h?p ?? ch�n x
        while (pos >= 0 && A[pos] > x)
        {
            // k?t h?p v?i d?ch chuy?n ph?n t? sang ph?i ?? ch?a ch? cho x
            A[pos + 1] = A[pos];
            pos--;
        }
        // ch�n x v�o v? tr� ?� t�m ???c
        A[pos + 1] = x;
    }
}