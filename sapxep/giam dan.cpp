#include <iostream>
using namespace std;
void BubbleSort2(int A[], int n)
{
    for (int i = 0; i < n - 1; i++)
        for (int j = 0; j < n - i - 1; j++)
            if (A[j] < A[j + 1])
                swap(A[j], A[j + 1]); // đổi chỗ A[j] và A[j + 1]
    
}
void SelectionSort2(int A[], int n)
{
    int min;
    for (int i = 0; i < n - 1; i++)
    {
        min = i; // tạm thời xem A[i] là nhỏ nhất
        // Tìm phẩn tử nhỏ nhất trong đoạn từ A[i] đến A[n - 1]
        for (int j = i + 1; j < n; j++)
            if (A[j] < A[min]) // A[j] mà nhỏ hơn A[min] thì A[j] là nhỏ nhất
                min = j; // lưu lại vị trí A[min] mới vừa tìm được
        if (min != i) // nếu như A[min] không phải là A[i] ban đầu thì đổi chỗ
            swap(A[i], A[min]);
    }
}
void InsertionSort2(int A[], int n)
{
    int pos, x;
    for (int i = 1; i < n; i++)
    {
        x = A[i]; // lưu lại giá trị của x tránh bị ghi đè khi dịch chuyển các phần tử
        pos = i - 1;
        // tìm vị trí thích hợp để chèn x
        while (pos >= 0 && A[pos] > x)
        {
            // kết hợp với dịch chuyển phần tử sang phải để chừa chỗ cho x
            A[pos + 1] = A[pos];
            pos--;
        }
        // chèn x vào vị trí đã tìm được
        A[pos + 1] = x;
    }
}