#include<stdio.h>
#include<stdlib.h>
void merge(int *arr, int s, int e)
{
    int mid = (s+e)/2;
    int len1 = mid - s+1;
    int len2 = e-mid;
    
    int *first = (int *)malloc(len1 *sizeof(int));
    int *second = (int *)malloc(len2 *sizeof(int));

    int mainindex=s;

    for (int i = 0; i < len1; i++)
    {
        first[i]= arr[mainindex++];
    }
    
    for (int i = 0; i < len2; i++)
    {
        second[i]= arr[mainindex++];
    }
    

    // merge sorted array
    int index1=0;
    int index2=0;
    mainindex=s;

    while (index1<len1 && index2<len2)
    {
        if (first[index1]<second[index2])
        {
            arr[mainindex++]=first[index1++];
        }
        else
        {
            arr[mainindex++]=second[index2++];
        }
    }
    while (index1 < len1)
        {
            arr[mainindex++]=first[index1++];
        }
    
    while (index1 < len1)
        {
            arr[mainindex++]=second[index2++];
        }
        free(first);
        free(second);
}
void mergesort(int *arr,int s, int e)
{
        //base case
        if(s>=e)
        {
            return;
        }
        int mid = s +(e-s)/2;
        // left side
        mergesort(arr, s, mid);
        // right side
        mergesort(arr, mid+1, e);
        // merge
        merge(arr, s, e);
}
    int main()
    {
        int arr[]={54,10,36,51,48,9,55,47,85,62};
        int n=10;
        mergesort(arr, 0, n-1);
        for (int i = 0; i < n; i++)
        {
            printf("%d ",arr[i]);
        }
        
        return 0;
    }