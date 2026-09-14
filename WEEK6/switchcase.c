#include<stdio.h>
void displayArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
void merge(int arr[], int p, int q, int r) {
    int n1 = q-p+1;
    int n2 = r-q;

    int L[n1], R[n2];

    for (int i =0; i<n1; i++)
        L[i] = arr[p + i];
    for (int j=0; j<n2; j++)
        R[j] =arr[q+1+j];
    int i, j, k;
    i =0,j =0,k =p;
    while (i <n1 && j <n2) {
        if (L[i] <=R[j]) {
            arr[k] =L[i];
            i++;
        } else {
            arr[k] =R[j];
            j++;
        }
        k++;
    }
    while (i <n1) {
        arr[k]=L[i];
        i++;
        k++;
    }
    while (j<n2) {
        arr[k]=R[j];
        j++;
        k++;
    }   
}
void Mergesort(int arr[], int p, int r) {
    if (p < r) {
        int q = (p+r)/2;
        Mergesort(arr, p, q);
        Mergesort(arr, q+1, r);
        merge(arr, p, q, r);
    }
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
void insertionSort(int arr[],int size){
    for(int step=1;step<size;step++){
        int key=arr[step];
        int j=step-1;
        while(j>=0 && key<arr[j]){
            arr[j+1]=arr[j];
            --j;
        }
        arr[j+1]=key;
    }
}
void binarysearch(int array[],int x,int low,int high){
    if(high >= low){
        int mid = (low +(high-low)/2);
        if(x==array[mid]){
            printf("Found at index number %d",mid);
            return;
        }
        if(x>array[mid]){
            binarysearch(array,x,mid+1,high);
            return;
        }
        binarysearch(array,x,low,mid+1);
        return;
    }
    printf("Not found");
    return;
}
int main() {
    int arr[] = {10, 7, 8, 9, 1, 5};
    int n=sizeof(arr)/sizeof(arr[0]);
    int choice;
    printf("Choose:\n");
    printf("1. Merge Sort\n");
    printf("2. Assignment 2\n");
    printf("3. Assignment 3\n");
    printf("Enter your choice (1-3): ");
    scanf("%d", &choice);
    switch (choice) {
        case 1:
            Mergesort(arr, 0, n-1);
            printf("Sorted array using Merge Sort : \n");
            displayArray(arr,n);
            break;
        case 2:
            insertionSort(arr,n);
            printf("Insertion Sorted array is \n");
            for(int i=0;i<n;++i){
            printf("  %d",arr[i]);
            }
            int x;
            printf("\n");
            printf("Enter the finding number : ");
            scanf("%d",&x);
            binarysearch(arr,x,0,n-1);
            break;
        case 3:
            bubbleSort(arr, n);
            printf("Sorted array using Bubble Sort : \n");
            displayArray(arr,n);
            QuickSort(arr, 0, n-1);
            printf("Sorted array using Quick Sort : \n");
            displayArray(arr,n);
            break;
        default:
            printf("Invalid choice. Please choose a number between 1 and 3.\n");
            break;
    }
    return 0;
}