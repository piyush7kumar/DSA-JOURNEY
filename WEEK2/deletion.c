#include <stdio.h>

int delete(int arr[], int n, int pos)
{
    int i;
    for(i=pos;i<n-1;i++)
        arr[i]=arr[i+1];

    return n-1;
}

int main()
{
    int arr[10]={10,20,30,40,50},n=5,pos,i;
    printf("Enter the index no : ");
	scanf("%d",&pos);
    n=delete(arr,n,pos);
	if(pos<n){
    for(i=0;i<n;i++)
        printf("The new array elements are %d ",arr[i]);
}
printf("Index error");
    return 0;
}
