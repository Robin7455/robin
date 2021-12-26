/*===================={Program to concatenate two linked list}====================*/
#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};
struct node *head1 = NULL;
struct node *head2 = NULL;

void insertAtTail(int val)
{
    struct node *newNode, *ptr;
    newNode = (struct node *)malloc(sizeof(struct node));
    if (newNode == NULL)
    {
        printf("memeory is full\n");
        return;
    }
    newNode->data = val;
    newNode->next = NULL;
    if (head1 == NULL)
    {
        head1 = newNode;
    }
    else
    {
        ptr = head1;
        while (ptr->next != NULL)
        {
            ptr = ptr->next;
        }
        ptr->next = newNode;
    }
}

void insertAtTail2(int val)
{
    struct node *newNode, *ptr;
    newNode = (struct node *)malloc(sizeof(struct node));
    if (newNode == NULL)

    {
        printf("memeory is full\n");
        return;
    }
    newNode->data = val;
    newNode->next = NULL;
    if (head2 == NULL)

    {
        head2 = newNode;
    }
    else
    {
        ptr = head2;
        while (ptr->next != NULL)

        {
            ptr = ptr->next;
        }
        ptr->next = newNode;
    }
}

void concatLL(struct node *head1, struct node *head2)
{
    struct node *head3 = head1;
    while (head3->next != NULL)
    {
        head3 = head3->next;
    }
    head3->next = head2;
}

void display()
{
    struct node *ptr = head1;
    while (ptr != NULL)
    {
        printf("%d ", ptr->data);
        ptr = ptr->next;
    }
    printf("\n");
}

void display2()
{
    struct node *ptr = head2;
    while (ptr != NULL)
    {
        printf("%d ", ptr->data);
        ptr = ptr->next;
    }
    printf("\n");
}

int main()
{
    insertAtTail(10);
    insertAtTail(20);
    insertAtTail(30);
    insertAtTail(40);
    printf("Displaying the first Linked List\n");
    display();
    insertAtTail2(87);
    insertAtTail2(76);
    insertAtTail2(66);
    insertAtTail2(56);
    printf("Displaying the second Linked List\n");
    display2();
    printf("Concatenating the two linked lists\n");
    concatLL(head1, head2);
    display();
    return 0;
}
