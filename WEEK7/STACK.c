#include<stdio.h>
#define MAX 19
int stack[MAX];
int top = -1;
int isfull(){
    return top == MAX -1;
}
int isempty(){
    return top == -1;
}

void push(int value){
    if(isfull()){
        printf("Stack Overflow");
    }
    else{
        top++;
        stack[top] = value;
        printf("pushed %d to stack\n", value);
    }
}
int pop(){
    if(isempty()){
        printf("Stack Underflow");
        return -1;
    }
    else{
            int poppedvalue = stack[top];
            top--;
            printf("popped %d from stack\n", poppedvalue);
            return poppedvalue;
        }
    }
    int peak(){
        if(isempty()){
            printf("Stack is empty");
            return -1;
        }
        else{
            return stack[top];
        }
    }
    void display(){
        if(isempty()){
            printf("Stack is empty");
        }
        else{
            printf("Stack elements are: ");
            for(int i=top;i>=0;i--){
                printf("%d ",stack[i]);
            }
            printf("\n");
        }
    }
    int main(){
        int choice,value;
        while(1){
            printf("1. Push\n");
            printf("2. Pop\n");
            printf("3. Peak\n");
            printf("4. Display\n");
            printf("5. Exit\n");
            printf("Enter your choice: ");
            scanf("%d",&choice);
            switch(choice){
                case 1:
                    printf("Enter value to push: ");
                    scanf("%d",&value);
                    push(value);
                    break;
                case 2:
                    pop();
                    break;
                case 3:
                    printf("Peak value is: %d\n",peak());
                    break;
                case 4:
                    display();
                    break;
                case 5:
                    exit(0);
                default:
                    printf("Invalid choice\n");
            }
        }
        return 0;
    }