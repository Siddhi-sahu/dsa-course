#include <stdio.h>

int partition(int a[], int low, int high)
{
    int pivot = a[low];
    int i = low;
    int j = high;
    int temp1;

    while (i < j)
    {
        int temp;
        while (a[i] <= pivot && i < high)
        {
            i++;
        };
        while (a[j] > pivot && j > low)
        {
            j--;
        };

        if (i < j)
        {
            temp = a[i];
            a[i] = a[j];
            a[j] = temp;
        }
    };

    temp1 = a[j];
    a[j] = a[low];
    a[low] = temp1;

    return j;
}
void quickSort(int a[], int low, int high)
{
    if (low < high)
    {
        int pIndex = partition(a, low, high);
        quickSort(a, low, pIndex - 1);
        quickSort(a, pIndex + 1, high);
    }
}
int main()
{
    int a[9] = {3, 5, 4, 1, 9, 6, 2, 8, 7}, low = 0, high = 8;
    quickSort(a, low, high);

    for (int i = 0; i < 9; i++)
    {
        printf("%d ", a[i]);
    }

    return 0;
}