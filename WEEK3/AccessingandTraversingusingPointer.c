#include <stdio.h>

int main()
{
    int array[5] = {10, 20, 30, 40, 50};
    int *p =array;
    int n;

    printf("Enter index: ");
    scanf("%d",&n);

    printf("Element = %d\n",*(p+n));

    printf("Array elements: ");
    for(int i=0; i<5; i++)
    {
        printf("%d ", *(p+i));
    }

    return 0;
}