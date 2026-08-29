#include <stdio.h>
int linearsearch(int arr[], int n, int key)
{
    int i;
    for(i=0;i<n;i++)
        if(key==*(arr+i))
            return i;

    return -1;
}

int main()
{
    int arr[8]={12,15,9,17,10,22,25,40};
    int n=sizeof(arr)/sizeof(arr[0]),key,pos;
    printf("Enter the value of key : ");
    scanf("%d",&key);

    pos=linearsearch(arr,n,key);

    if(pos==-1)
        printf("Not found");
    else
        printf("Found at position %d",pos);

    return 0;
}
