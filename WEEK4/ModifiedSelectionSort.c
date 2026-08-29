#include <stdio.h>

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

    selectionSort(array,size);

    printf("Sorted array: ");
    display(array,size);

    return 0;
}