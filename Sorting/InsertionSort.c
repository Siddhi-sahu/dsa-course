#include <stdio.h>

void InsertionSort(int a[], int n)
{
    int i;

    for (i = 0; i < n; i++)
    {
        int j = i;

        while (j > 0 && a[j - 1] > a[j])
        {
            int temp = a[j];
            a[j] = a[j - 1];
            a[j - 1] = temp;
            j--;
        }
    }
}
int main()
{
    int a[9] = {8, 9, 7, 4, 6, 5, 1, 4, 2}, n = 9;

    InsertionSort(a, n);

    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }

    return 0;
}