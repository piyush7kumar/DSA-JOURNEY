#include <stdio.h>

void binarySearch(int *array,int size,int key)
{
    int low=0,high=size-1,mid;

    while(low<=high)
    {
        mid=(low+high)/2;

        if(*(array+mid)==key)
        {
            printf("Element found at position %d",mid+1);
            return;
        }
        else if(*(array+mid)<key)
            low=mid+1;
        else
            high=mid-1;
    }

    printf("Element not found");
}

int main()
{
    int array[100],size,key;

    printf("Enter size: ");
    scanf("%d",&size);

    printf("Enter sorted elements: ");
    for(int i=0;i<size;i++)
        scanf("%d",&array[i]);

    printf("Enter element to search: ");
    scanf("%d",&key);

    binarySearch(array,size,key);

    return 0;
}