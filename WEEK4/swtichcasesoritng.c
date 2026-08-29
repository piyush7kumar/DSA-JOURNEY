#include <stdio.h>

void bubbleSort(int array[],int size)
{
    for(int step=0;step<size-1;step++)
    {
        int check=0;

        for(int i=0;i<size-step-1;i++)
        {
            if(array[i]>array[i+1])
            {
                int temp=array[i];
                array[i]=array[i+1];
                array[i+1]=temp;
                check=1;
            }
        }

        if(check==0)
            break;
    }
}

void selectionSort(int array[],int size)
{
    for(int step=0;step<size/2;step++)
    {
        int min=step;
        int max=step;

        for(int i=step+1;i<size-step;i++)
        {
            if(array[i]<array[min])
                min=i;

            if(array[i]>array[max])
                max=i;
        }

        int temp=array[step];
        array[step]=array[min];
        array[min]=temp;

        if(max==step)
            max=min;

        temp=array[size-step-1];
        array[size-step-1]=array[max];
        array[max]=temp;
    }
}

void insertionSort(int array[],int size)
{
    for(int step=1;step<size;step++)
    {
        int key=array[step];
        int i=step-1;

        while(i>=0 && array[i]>key)
        {
            array[i+1]=array[i];
            i--;
        }
        array[i+1]=key;
    }
}

void display(int array[],int size)
{
    for(int i=0;i<size;i++)
        printf("%d ",array[i]);
}

int main()
{
    int array[100],size,choice;

    printf("Enter size: ");
    scanf("%d",&size);

    printf("Enter elements: ");
    for(int i=0;i<size;i++)
        scanf("%d",&array[i]);

    printf("\n1. Bubble Sort");
    printf("\n2. Selection Sort");
    printf("\n3. Insertion Sort");
    printf("\nEnter choice: ");
    scanf("%d",&choice);

    switch(choice)
    {
        case 1:
            bubbleSort(array,size);
            break;

        case 2:
            selectionSort(array,size);
            break;

        case 3:
            insertionSort(array,size);
            break;

        default:
            printf("Invalid choice");
            return 0;
    }

    printf("Sorted array: ");
    display(array,size);
    return 0;
}