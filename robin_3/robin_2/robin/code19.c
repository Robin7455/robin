/*===================={to implement insertion in  doubly linked list }====================*/
#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
    struct node *prev;
};

void LinkListTraversal(struct node *head)
{
    while (head != NULL)
    {
        printf("%d ", head->data);
        head = head->next;
    }
    printf("\n");
}

// CASE 1
struct node *InsertionAtBeginning(struct node *head, int val)
{
    struct node *ptr = (struct node *)malloc(sizeof(struct node));
    ptr->data = val;
    ptr->next = NULL;
    ptr->prev = NULL;
    if (head == NULL)
    {
        head = ptr;
    }
    else
    {
        head->prev = ptr;
        ptr->next = head;
        head = ptr;
    }
    return head;
}

// CASE 2
struct node *InsertionAtEnd(struct node *head, int val)
{
    struct node *p = head;
    struct node *ptr = (struct node *)malloc(sizeof(struct node));
    ptr->data = val;
    ptr->next = NULL;
    ptr->prev = NULL;
    if (head == NULL)
    {
        head = ptr;
    }
    else
    {
        while (p->next != NULL)
        {
            p = p->next;
        }
        ptr->prev = p;
        p->next = ptr;
    }
    return head;
}

// CASE 3
struct node *InsertionInBetween(struct node *head, int val, int index)
{
    struct node *p = head;
    struct node *ptr = (struct node *)malloc(sizeof(struct node));
    ptr->data = val;
    ptr->next = NULL;
    ptr->prev = NULL;
    int i = 0;
    while (i != index - 1)
    {
        p = p->next;
        i++;
    }
    ptr->next = p->next;
    ptr->prev = p;
    p->next = ptr;
    return head;
}

int main()
{
    struct node *head = NULL;
    head = InsertionAtBeginning(head, 54);
    head = InsertionAtBeginning(head, 55);
    head = InsertionAtBeginning(head, 90);
    printf("Insertion at Beginning\n");
    LinkListTraversal(head);
    head = InsertionAtEnd(head, 345);
    head = InsertionAtEnd(head, 91);
    printf("Insertion at End\n");
    LinkListTraversal(head);
    head = InsertionInBetween(head, 9, 2);
    printf("Insertion by Index\n");
    LinkListTraversal(head);

    return 0;
}
