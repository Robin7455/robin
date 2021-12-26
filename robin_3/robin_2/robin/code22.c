/*===================={program to implement enqueue and dequeue operation in array}====================*/
#include <stdio.h>
#include <stdlib.h>

struct Queue
{
    int data;
    struct Queue *nxt;
};

void create(struct Queue **f, struct Queue **r)
{
    *f = NULL;
    *r = NULL;
}

void enqueue(struct Queue **f, struct Queue **r, int data)
{
    struct Queue *tmp = (struct Queue *)malloc(sizeof(struct Queue));
    tmp->data = data;
    tmp->nxt = NULL;
    if (*f == NULL)
    {
        *f = tmp;
        *r = tmp;
    }
    else
    {
        (*r)->nxt = tmp;
        *r = tmp;
    }
}

void dequeue(struct Queue **f)
{
    printf("Element deleted : %d\n", (*f)->data);
    *f = (*f)->nxt;
}

void display(struct Queue *ptr)
{
    printf("Printing the Queue\n");
    while (ptr)
    {
        printf("%d ", ptr->data);
        ptr = ptr->nxt;
    }
}

int main()
{
    struct Queue *f, *r;

    create(&f, &r);
    enqueue(&f, &r, 45);
    enqueue(&f, &r, 105);
    enqueue(&f, &r, 2);
    enqueue(&f, &r, 3);
    enqueue(&f, &r, 39);
    display(f);
    printf("\n");
    dequeue(&f);
    display(f);
    return 0;
}
