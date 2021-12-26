/*===================={ program to implement push pop operation in stack using array}====================*/

#include <stdio.h>
#include <stdlib.h>

struct stack
{
    int size;
    int top;
    int *arr;
};

int isFull(struct stack *s)
{
    if (s->top == s->size - 1)
        return 1;
    else
        return 0;
}

int isEmpty(struct stack *s)
{
    if (s->top == s->size - 1)
        return 1;
    else
        return 0;
}

void push(struct stack *s, int val)
{
    if (isFull(s))
    {
        printf("Stack Overflow\n");
    }
    else
    {
        s->top++;
        s->arr[s->top] = val;
    }
}

int pop(struct stack *s)
{
    int val = -1;
    if (isEmpty(s))
    {
        printf("Cannot pop\n");
    }
    else
    {
        val = s->arr[s->top];
        s->top--;
    }
    return val;
}

void display(struct stack *s)
{
    for (int i = s->top; i >= 0; i--)
    {
        printf("%d\n", s->arr[i]);
    }
}
int main()
{
    struct stack *s;
    s = (struct stack *)malloc(sizeof(struct stack));
    s->size = 10;
    s->top = -1;
    s->arr = (int *)malloc(s->size * sizeof(int));

    push(s, 77);
    push(s, 66);
    push(s, 55);
    push(s, 45);
    printf("Displaying stack elements\n");
    display(s);
    printf("Popped %d from the stack\n", pop(s));
    printf("Popped %d from the stack\n", pop(s));
    printf("Displaying stack elements\n");
    display(s);

    return 0;
}
