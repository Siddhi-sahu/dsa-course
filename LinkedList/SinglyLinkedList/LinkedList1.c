#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

struct node *start = 0;

struct node *createNode()
{
    struct node *h1;
    h1 = (struct node *)malloc(sizeof(struct node));
    printf("Enter a number:");
    scanf("%d", &h1->data);
    h1->next = 0;

    return h1;
}
void insertStart()
{
    struct node *k1;
    k1 = createNode();

    if (start == 0)
    {
        start = k1;
    }
    else
    {
        k1->next = start;
        start = k1;
    }
};

void insertEnd()
{
    struct node *ie;
    struct node *s;

    s = createNode();
    ie = start;

    if (start == 0)
    {
        start = s;
    }
    else
    {
        while (ie->next != 0)
        {
            ie = ie->next;
        };
        ie->next = s;
    }
};

void DeleteStart()
{
    struct node *d;

    if (start == 0)
    {
        printf("there is no node to delete\n");
    }
    else
    {
        d = start;
        start = start->next;
        d->next = 0;
        free(d);
    }
}
int main()
{
    printf("1. Insertion from start\n");
    printf("2. Insertion from End\n");
    printf("3. Insertion from Middle\n");
    printf("4. Deletion from start\n");
    printf("5. Deletion from End\n");
    printf("6. Deletion from Middle\n");
    printf("7. Display\n");
    printf("8. Exit\n");

    while (1)
    {
        int ch;

        printf("Enter your choice\n");
        scanf("%d", &ch);

        switch (ch)
        {
        case 1:
        {
            insertStart();
            break;
        }
        case 2:
        {
            insertEnd();
            break;
        }
        case 3:
        {
            break;
        }
        case 4:
        {
            DeleteStart();
            break;
        }
        case 5:
        {
            break;
        }
        case 6:
        {
            break;
        }
        case 7:
        {
            struct node *d = start;

            while (d != 0)
            {
                printf("%d ", d->data);
                d = d->next;
            }
            printf("\n");
            break;
        }
        case 8:
        {
            exit(0);
        }
        default:
        {
            printf("Wrong Input\n");
            break;
        }
        }
    }

    return 0;
}