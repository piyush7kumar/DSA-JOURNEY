#include<stdio.h>
#define MAX 100
int queue[MAX];
int front = -1;
int rear = -1;
int isfull(){
    if(front == (rear + 1) % MAX || (front == 0 && rear == MAX - 1)){
        return 1;
    }
    return 0;
}
int isempty(){
    if(front == -1){
        return 1;
    }
    return 0;
}
void enqueue(int value){
    if(isfull()){
        printf("Queue Overflow\n");
    }
    else{
        if(front == -1){
            front = 0;
        }
        rear = (rear + 1) % MAX;
        queue[rear] = value;
        printf("Enqueued %d to queue\n", value);
    }
}
int dequeue(){
    int dequeuedvalue;
    if(isempty()){
        printf("Queue Underflow\n");
        return -1;
    }
    else{
        dequeuedvalue = queue[front];
        if(front == rear){
            front = -1;
            rear = -1;
        }
        else{
            front = (front + 1) % MAX;
        }
        printf("Dequeued %d from queue\n", dequeuedvalue);
        return dequeuedvalue;
    }
}
void display(){
    if(isempty()){
        printf("Queue is empty\n");
    }
    else{
        printf("Front = %d\n", front);
        for(int i = front; i != rear; i = (i + 1) % MAX){
            printf("%d ", queue[i]);
        }
        printf("%d\n", queue[rear]);
    }
}
int main(){
    enqueue(10);
    enqueue(20);
    enqueue(30);
    display();
    dequeue();
    display();
    enqueue(40);
    enqueue(50);
    display();
    return 0;
}