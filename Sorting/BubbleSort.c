#include <stdio.h>

void BubbleSort(int a[], int range)
{
    int i, temp, j;

    for (j = 0; j < range - 1; j++)
    {

        for (i = 0; i < range - 1; i++)
        {
            if (a[i] > a[i + 1])
            {
                temp = a[i + 1];
                a[i + 1] = a[i];
                a[i] = temp;
            }
        };
    }
    printf("Sorted array: ");
    for (i = 0; i < range; i++)
    {
        printf("%d ", a[i]);
    }
}

int main()
{

    int range, i;
    printf("enter the range of numbers: ");
    scanf("%d", &range);

    int a[range];

    printf("Enter %d numbers: ", range);

    for (i = 0; i < range; i++)
    {
        scanf("%d", &a[i]);
    }

    BubbleSort(a, range);

    return 0;
}