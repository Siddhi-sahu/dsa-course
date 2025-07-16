#include <stdio.h>

void SelectionSort(int i, int j, int range, int a[])
{
    for (i = 0; i < range - 1; i++)
    {
        int min = a[i], index = i;
        int temp = a[index];
        for (j = i + 1; j < range; j++)
        {

            if (min > a[j])
            {
                min = a[j];
                index = j;
            }
        };

        if (temp != min)
        {
            // swap min and first element
            a[i] = min;
            a[index] = temp;
        }
    };

    for (i = 0; i < range; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");
}

int main()
{
    int i, j;
    int range;
    printf("Enter th range for your array : ");
    scanf("%d", &range);

    int a[range];

    printf("Enter the %d numbers: ", range);

    for (i = 0; i < range; i++)
    {
        scanf("%d", &a[i]);
    }

    SelectionSort(i, j, range, a);

    return 0;
}