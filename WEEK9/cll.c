#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

struct node *head = NULL;

void display()
{
    struct node *temp = head;

    if(head == NULL)
        return;

    do
    {
        printf("%d ", temp->data);
        temp = temp->next;
    }while(temp != head);
    printf("\n");
}

void insertBeginning(int val)
{
    struct node *newNode, *temp;

    newNode = (struct node*)malloc(sizeof(struct node));
    newNode->data = val;

    temp = head;

    while(temp->next != head)
        temp = temp->next;

    newNode->next = head;
    temp->next = newNode;
    head = newNode;
}

void insertEnd(int val)
{
    struct node *newNode, *temp;

    newNode = (struct node*)malloc(sizeof(struct node));
    newNode->data = val;

    temp = head;

    while(temp->next != head)
        temp = temp->next;

    temp->next = newNode;
    newNode->next = head;
}

void insertAtAnyPosition(int val, int position)
{
    struct node *newNode, *temp;

    newNode = (struct node*)malloc(sizeof(struct node));
    newNode->data = val;

    if(position <= 1)
    {
        insertBeginning(val);
        free(newNode);
        return;
    }

    temp = head;

    for(int i = 1; i < position-1 && temp->next != head; i++)
        temp = temp->next;

    newNode->next = temp->next;
    temp->next = newNode;
}

void deleteBeginning()
{
    struct node *temp, *last;

    if(head == NULL)
        return;

    temp = head;
    last = head;

    while(last->next != head)
        last = last->next;

    if(head->next == head)
    {
        head = NULL;
        free(temp);
        return;
    }

    head = head->next;
    last->next = head;
    free(temp);
}

void deleteEnd()
{
    struct node *temp, *prev;

    if(head == NULL)
        return;

    temp = head;

    if(head->next == head)
    {
        head = NULL;
        free(temp);
        return;
    }

    while(temp->next != head)
    {
        prev = temp;
        temp = temp->next;
    }

    prev->next = head;
    free(temp);
}
void deleteAtAnyPosition(int position)
{
    struct node *temp, *del;

    if(head == NULL)
        return;

    if(position == 1)
    {
        deleteBeginning();
        return;
    }

    temp = head;

    for(int i = 1; i < position-1 && temp->next != head; i++)
        temp = temp->next;

    if(temp->next == head)
        return;

    del = temp->next;
    temp->next = del->next;
    free(del);
}

void search(int key)
{
    struct node *temp = head;
    int pos = 1;

    if(head == NULL)
        return;

    do
    {
        if(temp->data == key)
        {
            printf("Element %d found at position %d\n", key, pos);
            return;
        }

        temp = temp->next;
        pos++;

    }while(temp != head);

    printf("Element not found\n");
}
int main()
{
    struct node *d1 = (struct node*)malloc(sizeof(struct node));
    struct node *d2 = (struct node*)malloc(sizeof(struct node));
    struct node *d3 = (struct node*)malloc(sizeof(struct node));

    d1->data = 10;
    d1->next = d2;

    d2->data = 20;
    d2->next = d3;

    d3->data = 30;
    d3->next = d1;

    head = d1;

    printf("Initial CSLL: ");
    display();

    insertBeginning(5);
    printf("After Insertion at Beginning: ");
    display();

    insertEnd(40);
    printf("After Insertion at End: ");
    display();

    insertatanyposition(25, 3);
    printf("After Insertion in Middle: ");
    display();

    deleteBeginning();
    printf("After Deletion at Beginning: ");
    display();

    deleteEnd();
    printf("After Deletion at End: ");
    display();

    deleteatanyposition(3);
    printf("After Deletion in Middle: ");
    display();

    search(20);
    return 0;
}
