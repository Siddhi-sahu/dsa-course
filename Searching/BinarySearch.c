#include <stdio.h>

void BinarySearch(int l, int r, int a[], int search)
{

    while (l <= r)
    {
        int m = (l + r) / 2;
        if (a[m] == search)
        {
            printf("Number found at postion %d\n", m + 1);
            break;
        }
        else if (a[m] > search)
        {
            r = m - 1;
        }
        else if (a[m] < search)
        {
            l = m + 1;
        };
    };

    if (l > r)
    {
        printf("Number is not fpund\n");
    }
}
int main()
{

    int l = 0, r, search, N, i;

    printf("enter a range between under 20: ");
    scanf("%d", &N);
    int a[N];
    r = N - 1;

    printf("Enter %d numbers: ", N);

    for (i = 0; i < N; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("Enter the number you want to search: ");
    scanf("%d", &search);

    BinarySearch(l, r, a, search);

    return 0;
}