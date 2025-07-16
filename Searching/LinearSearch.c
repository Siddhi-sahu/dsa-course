#include <stdio.h>
void LinearSearch(int a[], int r, int search)
{
    int i, k = 0;
    for (i = 0; i < r; i++)
    {
        if (a[i] == search)
        {
            printf("Number is found at position %d\n", i + 1);
            k++;
            break;
        }
    }

    if (k == 0)
    {
        printf("Number not found\n");
    };
}
int main()
{
    int i, a[100], search;
    int r;
    printf("Enter a range ");
    scanf("%d", &r);
    printf("Enter %d numbers: ", r);
    for (i = 0; i < r; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("Enter the number you want to search: ");
    scanf("%d", &search);

    LinearSearch(a, r, search);

    return 0;
}
