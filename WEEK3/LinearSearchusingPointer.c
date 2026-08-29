#include <stdio.h>

void linearSearch(int *array,int size,int key)
{
    for(int i=0;i<size;i++)
    {
        if(*(array+i)==key)
        {
            printf("Element found at position %d",i+1);
            return;
        }
    }
    printf("Element not found");
}

int main()
{
    int array[100],size,key;

    printf("Enter size: ");
    scanf("%d",&size);

    printf("Enter elements: ");
    for(int i=0;i<size;i++)
        scanf("%d",&array[i]);

    printf("Enter element to search: ");
    scanf("%d",&key);

    linearSearch(array,size,key);

    return 0;
}