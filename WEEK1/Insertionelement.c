#include <stdio.h>

void insert(int arr[], int n, int pos, int value)
{
    for(int i=n; i>=pos; i--)
    {
        arr[i]=arr[i-1];
    }

    arr[pos-1]=value;

    printf("Array after insertion: ");
    for(int i=0; i<=n; i++)
    {
        printf("%d ", arr[i]);
    }
}

int main()
{
    int arr[100], n, pos, value;

    printf("Enter size: ");
    scanf("%d", &n);

    printf("Enter elements: ");
    for(int i=0; i<n; i++)
        scanf("%d", &arr[i]);

    printf("Enter position: ");
    scanf("%d", &pos);

    printf("Enter element: ");
    scanf("%d", &value);

    insert(arr, n, pos, value);

    return 0;
}