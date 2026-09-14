#include<stdio.h>
#define MAX 20
void enQueue(int );
void deQueue();
void display();
int item [MAX],front =-1,rear=-1;
int main(){
    display();
    deQueue();
    enQueue(10);
    enQueue(20);
    enQueue(30);
    enQueue(40);
    enQueue(50);
    enQueue(60);
    display();
    deQueue();
    display();
}
    void enQueue(int value){
        if(rear == MAX-1)
            printf("Queue is full\n");
        else{
            if(front == -1)
                front = 0;
            rear++;
            item[rear] = value;
            printf("Inserted -> %d\n", value);
        }
    }
    void deQueue(){
        if(front == -1 || front > rear){
            printf("Queue is empty\n");
            return;
        }
        else{
            printf("Deleted : %d\n", item[front]);
            front++;
            if (front > rear){
                front = rear = -1;
            }
        }
    }
    void display(){
        if(front == -1)
            printf("Queue is empty\n");
        else{
            printf("Queue elements are:\n");
            for(int i = front; i <= rear; i++)
                printf("%d ", item[i]);
            printf("\n");
        }
    }