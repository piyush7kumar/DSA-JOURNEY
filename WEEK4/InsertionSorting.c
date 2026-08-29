#include <stdio.h>

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
    int array[100],size;

    printf("Enter size: ");
    scanf("%d",&size);

    printf("Enter elements: ");
    for(int i=0;i<size;i++)
        scanf("%d",&array[i]);

    insertionSort(array,size);

    printf("Sorted array: ");
    display(array,size);

    return 0;
}