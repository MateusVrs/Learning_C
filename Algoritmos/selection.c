#include <stdio.h>

void selection(int A[], int len)
{
    for (int b = 0; b < len; b++)
    {
        int i = b;
        for (int f = b + 1; f < len; f++)
        {
            if (A[f] <= A[i])
            {
                i = f;
            }
        }
        int base = A[b];
        A[b] = A[i];
        A[i] = base;
    }
}

int main()
{
    int arr[] = {10, 8, 1, 6, 7, 3, 5, 9, 2};
    int len = sizeof(arr) / sizeof(int);
    selection(arr, len);
    for (int n = 0; n < len; n++)
    {
        printf("%d ", arr[n]);
    }
    return 0;
}
