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
    while(temp != NULL)
    {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}

void insertBeginning(int val)
{
    struct node *newNode = (struct node*)malloc(sizeof(struct node));

    newNode->data = val;
    newNode->next = head;
    head = newNode;
}

void insertEnd(int val){
    struct node *newNode = (struct node*)malloc(sizeof(struct node));
    struct node *temp = head;

    newNode->data = val;
    newNode->next = NULL;

    if(head == NULL)
    {
        head = newNode;
        return;
    }
    while(temp->next != NULL)
        temp = temp->next;
    temp->next = newNode;
}

void insertAtAnyPosition(int val, int position){
    struct node *newNode = (struct node*)malloc(sizeof(struct node));
    struct node *temp = head;

    if(position <= 1)
    {
        insertBeginning(val);
        free(newNode);
        return;
    }
    newNode->data = val;

    for(int i = 1; i < position-1 && temp != NULL; i++)
        temp = temp->next;

    if(temp == NULL)
    {
        printf("Position out of range\n");
        free(newNode);
        return;
    }
    newNode->next = temp->next;
    temp->next = newNode;
}

void deleteBeginning(){
    if(head == NULL)
        return;
    struct node *temp = head;
    head = head->next;
    free(temp);
}

void deleteEnd(){
    if(head == NULL)
        return;

    struct node *temp = head;

    if(head->next == NULL)
    {
        free(head);
        head = NULL;
        return;
    }

    while(temp->next->next != NULL)
        temp = temp->next;

    free(temp->next);
    temp->next = NULL;
}

void deleteAtAnyPosition(int position)
{
    struct node *temp = head, *del;

    if(head == NULL)
        return;

    if(position == 1)
    {
        deleteBeginning();
        return;
    }

    for(int i = 1; i < position-1 && temp != NULL; i++)
        temp = temp->next;

    if(temp == NULL || temp->next == NULL)
        return;

    del = temp->next;
    temp->next = del->next;
    free(del);
}
void search(int key)
{
    struct node *temp = head;
    int pos = 1;

    while(temp != NULL)
    {
        if(temp->data == key)
        {
            printf("Element %d found at position %d\n", key, pos);
            return;
        }

        temp = temp->next;
        pos++;
    }

    printf("Element not found\n");
}

void reverse()
{
    struct node *prev = NULL, *current = head, *nextnode;

    while(current != NULL)
    {
        nextnode = current->next;
        current->next = prev;
        prev = current;
        current = nextnode;
    }

    head = prev;
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
    d3->next = NULL;

    head = d1;

    display();

    insertBeginning(5);
    display();

    insertEnd(40);
    display();

    insertatanyposition(25, 3);
    display();

    deleteBeginning();
    display();

    deleteEnd();
    display();

    deleteAtAnyPosition(3);
    display();

    search(20);

    reverse();
    display();

    return 0;
}