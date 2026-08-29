#include <stdio.h>

int main()
{
    int arr[] = {10, 12, 15, 16, 7};
    int i;
    printf("enter the value of index : ");
    scanf("%d",&i);
    if (i<5)
	printf("%d\n",*(arr+i));
	else
	printf("Invalid index");

	return 0;
}
