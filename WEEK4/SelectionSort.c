#include <stdio.h>

void selectionSort(int array[],int size)
{
    for(int step=0;step<size-1;step++)
    {
        int min_idx=step;

        for(int i=step+1;i<size;i++)
        {
            if(array[i]<array[min_idx])
                min_idx=i;
        }

        int temp=array[step];
        array[step]=array[min_idx];
        array[min_idx]=temp;
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