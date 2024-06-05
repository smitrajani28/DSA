#include<stdio.h>
int partition(int arr[], int s, int e)
{
    int pivot = arr[s];
    int count = 0;
    for (int i = s+1; i <= e; i++)
    {
        if (arr[i]<= pivot)
        { 
            count++;
        }
    }
    int pivotindex = s + count;
    // swap...........
    int temp = arr[pivotindex];
    arr[pivotindex] = arr[s];
    arr[s]= temp;

    // now left and right part 
    int i = s, j = e;
    while (i< pivotindex && j > pivotindex)
    {
        if (arr[i]<pivot)
        {
            i++;
        }   
        if (arr[j]>pivot)
        {
            j--;
        }
        if (arr[i]>pivot && arr[j]<pivot)
        {
            temp =arr[i];
            arr[i] = arr[j];
            arr[j]= temp;
            i++;
            j--;
        }
    }
    return pivotindex;
}
void quicksort(int arr[],int s, int e)
{
    // base case
    if (s>=e)
    {
        return;
    }
    
    //partition
    int p = partition(arr, s, e);

    //left side
    quicksort(arr, s, p-1);

    //right side
    quicksort(arr, p+1, e);
}
    int main()
    {
        int arr[]={52,3,5,9,10,55,23,17,22,8};
        int n=10;
        quicksort(arr, 0, n-1);
        for (int i = 0; i < n; i++)
        {
            printf("%d ",arr[i]);
        }
        return 0;
    }