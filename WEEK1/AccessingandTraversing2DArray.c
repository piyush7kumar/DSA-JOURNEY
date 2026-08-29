#include<stdio.h>
int main()
{
    int a, b, array[2][3] = {{5,4,3},{1,2,3}};

    printf("Enter the row and column no.: ");
    scanf("%d%d", &a, &b);

    printf("The value is %d\n", array[a][b]);
    printf("All elements are:\n");

    for(int j=0; j<2; j++)
    {
        for(int k=0; k<3; k++)
        {
            printf("%d ", array[j][k]);
        }
        printf("\n");
    }
    return 0;
}