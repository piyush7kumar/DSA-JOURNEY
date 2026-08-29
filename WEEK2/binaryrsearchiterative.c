#include <stdio.h>
int binarysearch(int arr[], int n, int key)
{
    int low=0,high=n-1,mid;

    while(low<=high)
    {
        mid=(low+high)/2;

        if(arr[mid]==key)
            return mid;
        if(arr[mid]<key)
            low=mid+1;
        else
            high=mid-1;
    }

    return -1;
}

int main()
{
    int arr[]={10,12,15,17,22,25,30,40,60,70};
    int n=10,key,result;
	printf("Enter the index element : ");
	scanf("%d",&key);
    result=binarysearch(arr,n,key);
    if(result==-1)
        printf("Not found");
    else
        printf("Found at position %d",result);

    return 0;
}
