/*===================={to implement deletionn in singly linked list }====================*/
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

struct Node *insertAtFirst(struct Node *head, int data)
{
    struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
    ptr->data = data;

    ptr->next = head;
    return ptr;
}
// Case 1: Deleting the first element from the linked list
struct Node *deleteFirst(struct Node *head)
{
    struct Node *ptr = head;
    head = head->next;
    free(ptr);
    return head;
}

// Case 2: Deleting the element at a given index from the linked list
struct Node *deleteAtIndex(struct Node *head, int index)
{
    struct Node *p = head;
    struct Node *q = head->next;
    for (int i = 0; i < index - 1; i++)
    {
        p = p->next;
        q = q->next;
    }
    p->next = q->next;
    free(q);
    return head;
}

// Case 3: Deleting the last element
struct Node *deleteAtLast(struct Node *head)
{
    struct Node *p = head;
    struct Node *q = head->next;
    while (q->next != NULL)
    {
        p = p->next;
        q = q->next;
    }
    p->next = NULL;
    free(q);
    return head;
}

int main()
{
    struct Node *head = NULL;
    linkedListTraversal(head);
    head = insertAtFirst(head, 36);
    head = insertAtFirst(head, 367);
    head = insertAtFirst(head, 76);
    head = insertAtFirst(head, 98);
    head = insertAtFirst(head, 44);
    head = insertAtFirst(head, 74);
    head = insertAtFirst(head, 88);
    printf("Printing the original Linked List\n");
    linkedListTraversal(head);
    printf("\nCASE 1: Deletion at Beginning\n");
    head = deleteFirst(head);
    linkedListTraversal(head);
    printf("\nCASE 2: Deletion In Middle\n");
    head = deleteAtIndex(head, 3);
    linkedListTraversal(head);
    printf("\nCASE 3: Deletion At End\n");
    head = deleteAtLast(head);
    linkedListTraversal(head);
    return 0;
}
