/*===================={to implement insertion in singly linked list }====================*/
#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

void linkedListTraversal(struct Node *ptr)
{
    while (ptr != NULL)
    {
        printf("%d ", ptr->data);
        ptr = ptr->next;
    }
}

// Case 1
struct Node *insertAtFirst(struct Node *head, int data)
{
    struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
    ptr->data = data;

    ptr->next = head;
    return ptr;
}

// Case 2
struct Node *insertAtIndex(struct Node *head, int data, int index)
{
    struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
    struct Node *p = head;
    int i = 0;

    while (i != index - 1)
    {
        p = p->next;
        i++;
    }
    ptr->data = data;
    ptr->next = p->next;
    p->next = ptr;
    return head;
}

// Case 3
struct Node *insertAtEnd(struct Node *head, int data)
{
    struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
    ptr->data = data;
    struct Node *p = head;

    while (p->next != NULL)
    {
        p = p->next;
    }
    p->next = ptr;
    ptr->next = NULL;
    return head;
}

int main()
{
    struct Node *head = NULL;
    linkedListTraversal(head);
    printf("\nCASE 1: Insertion At Beginning\n");
    head = insertAtFirst(head, 36);
    head = insertAtFirst(head, 3);
    head = insertAtFirst(head, 6);
    head = insertAtFirst(head, 4);
    linkedListTraversal(head);
    printf("\nCASE 2: Insertion At End\n");
    head = insertAtEnd(head, 4);
    head = insertAtEnd(head, 5);
    head = insertAtEnd(head, 7);
    linkedListTraversal(head);
    printf("\nCASE 3: Insertion After a given index\n");
    head = insertAtIndex(head, 99, 2);
    head = insertAtIndex(head, 999, 4);
    linkedListTraversal(head);

    return 0;
}
