#include <stdio.h>

void delete(int arr[], int n, int pos)
{
    for(int i=pos-1; i<n-1; i++)
    {
        arr[i]=arr[i+1];
    }

    printf("Array after deletion: ");
    for(int i=0; i<n-1; i++)
    {
        printf("%d ", arr[i]);
    }
}

int main()
{
    int arr[100], n, pos;

    printf("Enter size: ");
    scanf("%d", &n);

    printf("Enter elements: ");
    for(int i=0; i<n; i++)
        scanf("%d", &arr[i]);

    printf("Enter position to delete: ");
    scanf("%d", &pos);

    delete(arr, n, pos);

    return 0;
}