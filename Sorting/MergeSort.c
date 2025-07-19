#include <stdio.h>

void Merge(int a[], int low, int mid, int high)
{
    int temp[100];
    int left = low;
    int right = mid + 1;
    int tempIndex = 0;

    while (left <= mid && right <= high)
    {
        if (a[left] <= a[right])
        {
            temp[tempIndex] = a[left];
            tempIndex++;
            left++;
        }
        else
        {
            temp[tempIndex] = a[right];
            tempIndex++;
            right++;
        }
    }

    while (left <= mid)
    {
        temp[tempIndex] = a[left];
        tempIndex++;
        left++;
    }

    while (right <= high)
    {
        temp[tempIndex] = a[right];
        tempIndex++;
        right++;
    }

    for (int i = low; i < right; i++)
    {
        a[i] = temp[i - low];
    }
}

void MergeSort(int a[], int low, int high)
{
    int mid = (low + high) / 2;

    if (low == high)
    {
        return;
    }
    if (low < high)
    {
        MergeSort(a, low, mid);
        MergeSort(a, mid + 1, high);
        Merge(a, low, mid, high);
    }
}

int main()
{
    int a[] = {6, 4, 6, 7, 1, 2, 0, 7, 9, 8}, low = 0, high = 9;

    MergeSort(a, low, high);

    for (int i = 0; i < 10; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");
    return 0;
}