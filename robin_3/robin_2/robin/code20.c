/*===================={program to implement deletion in doubly linkde list}====================*/
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

// CASE 1
struct node *DeletionAtBeginning(struct node *head)
{
    if (head == NULL)
    {
        printf("LL Empty\n");
    }
    else
    {
        struct node *ptr = head;
        head = head->next;
        free(ptr);
        return head;
    }
}

// CASE 2
struct node *DeletionAtEnd(struct node *head)
{
    struct node *p = head;
    struct node *q = head->next;
    if (head == NULL)
    {
        printf("LL Empty\n");
    }
    else
    {
        while (q->next != NULL)
        {
            p = p->next;
            q = q->next;
        }
        p->next = q->next;
        free(q);
    }
    return head;
}

// CASE 3
struct node *DeletionInBetween(struct node *head, int index)
{
    struct node *p = head;
    struct node *q = head->next;
    int i = 0;
    while (i != index - 1)
    {
        p = p->next;
        q = q->next;
        i++;
    }
    p->next = q->next;
    q->next->prev = p;
    free(q);
    return head;
}

int main()
{
    struct node *head = NULL;
    head = InsertionAtBeginning(head, 6);
    head = InsertionAtBeginning(head, 5);
    head = InsertionAtBeginning(head, 4);
    head = InsertionAtBeginning(head, 3);
    head = InsertionAtBeginning(head, 2);
    head = InsertionAtBeginning(head, 1);
    printf("Printing The Original Link List\n");
    LinkListTraversal(head);
    printf("Deletion at Beginning\n");
    head = DeletionAtBeginning(head);
    LinkListTraversal(head);
    printf("Deletion at End\n");
    head = DeletionAtEnd(head);
    LinkListTraversal(head);
    printf("Deletion By Index\n");
    head = DeletionInBetween(head, 1);
    LinkListTraversal(head);

    return 0;
}
