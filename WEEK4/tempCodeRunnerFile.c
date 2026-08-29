
void bubbleSort(int a[], int size)
{
    int step,i;
    for(step=0;step<size-1;step++)
    {
        for(i=0;i<size-step-1;i++)
        {
            if(a[i]>a[i+1])
            {
            int temp=a[i];
                a[i]=a[i + 1];
                a[i+1]=temp;
            }
        }
        for(int j=0;j<size;j++)
        {
            printf("%d ", a[j]);
        }
        printf("\n");
    }
}