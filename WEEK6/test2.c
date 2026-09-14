#include<stdio.h>
void displayArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
void bubbleSort(int arr[], int n) {
    for (int i = 0; i < 1; i++) {
        for (int j = 0; j < n-i-1; j++) {
            if (arr[j] > arr[j+1]) {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}
int Partition(int arr[], int low, int high) {
    int pivot = arr[high];
    int i = (low - 1);
    for (int j = low; j < high; j++) {
        if (arr[j] <= pivot) {
            i++;
            int temp = arr[i];
            arr[i] = arr[j];
            
            arr[j] = temp;
        }
    }
    int temp = arr[i + 1];
    arr[i + 1] = arr[high];
    arr[high] = temp;
    return (i + 1);

}
void QuickSort(int arr[], int low, int high) {
    if (low < high) {
        int pivot = Partition(arr, low, high);
        QuickSort(arr, low, pivot - 1);
        QuickSort(arr, pivot + 1, high);
    }
}
int main() {
    int arr[] = {10, 7, 8, 9, 1, 5};
    int n=sizeof(arr)/sizeof(arr[0]);
    int choice;
    printf("Choose:\n");
    printf("1. Merge Sort\n");
    printf("2. Assignment 1\n");
    printf("3. Assignment 2\n");
    printf("Enter your choice (1-3): ");
    scanf("%d", &choice);
    
    switch (choice) {
        case 1:
            Mergesort(arr, 0, n-1);
            printf("Sorted array using Merge Sort : \n");
            displayArray(arr,n);
            break;
        case 2:
            bubbleSort(arr, n);
            printf("Sorted array using Bubble Sort : \n");
            displayArray(arr,n);
            
            break;
        default:
            printf("Invalid choice\n");
    }
    return 0;
}