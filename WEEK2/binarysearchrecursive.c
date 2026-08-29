#include<stdio.h>
int binarysearch(int array[],int x,int low,int high){
	if(high >= low){
		int mid = (low +(high-low)/2);
		if(x==array[mid])
		return mid;
		if(x>array[mid])
		return binarysearch(array,x,mid+1,high);
		return binarysearch(array,x,low,mid+1);
			}
		return -1;
}
	int main(){
		int array[]={10,15,20,25,30,35,40,45,50,55,60};
		int n = sizeof (array)/sizeof (array[0]);
		int x;
		printf("Enter the finding number : ");
		scanf("%d",&x);
		int result = binarysearch(array,x,0,n-1);
		if(result==-1){
		printf("Not found");
	}
	else{
		printf("Found at index number %d",result);
	}
	return 0;
	}
