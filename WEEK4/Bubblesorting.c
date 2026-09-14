#include <stdio.h>
void display(int array[],int size)
{
    for(int i=0;i<size;i++)
        printf("%d ",array[i]);
        printf("\n");
}
void bubbleSort(int array[],int size)
{
    for(int step=0;step<size-1;step++)
    {

        for(int i=0;i<size-step-1;i++)
        {
            if(array[i]>array[i+1])
            {
                int temp=array[i];
                array[i]=array[i+1];
                array[i+1]=temp;
            }
        }
        display(array,size);
    }
}

int main()
{
    int array[100],size;

    printf("Enter size: ");
    scanf("%d",&size);

    printf("Enter elements: ");
    for(int i=0;i<size;i++)
        scanf("%d",&array[i]);

    bubbleSort(array,size);

    printf("Sorted array: ");
    display(array,size);

    return 0;
}