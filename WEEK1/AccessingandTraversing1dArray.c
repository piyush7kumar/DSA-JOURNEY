#include <stdio.h>

int main()
{
    int n, arr[5] = {5,4,3,2,1};

    printf("Enter the index no.: ");
    scanf("%d", &n);

    printf("The value is %d\n", arr[n]);
    printf("All elements are:\n");

    for(int i=0; i<5; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}