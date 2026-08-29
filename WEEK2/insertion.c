#include <stdio.h>

int insert(int arr[], int n, int pos, int x) {
	int i;
	for(i=n; i>pos; i--)
		arr[i]=arr[i-1];

	arr[pos]=x;
	return n+1;
}
void print(int arr[],int n){
	int i;
	for(i=0;i<n;i++)
	printf("%d ",arr[i]);
	}
int main() {
	int arr[]= {10,20,40,50},n,pos=2,x,i;
	n=sizeof(arr)/sizeof(arr[0]);
	printf("Enter the index where element is to be inserted : ");
	scanf("%d",&pos);
	printf("Enter the element to be inserted : ");
	scanf("%d",&x);
	n=insert(arr,n,pos,x);
	print(arr,n);
	return 0;
}
