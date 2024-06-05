#include<stdio.h>

int mountain(int arr[],int size)
{
    int s=0,e=size-2,ans=-1;
    int mid = s +(e-s)/2;
    while (s<=e)
    {
    if (arr[mid] < arr[mid+1])
    {
        s=mid +1;
    }
    else if (arr[mid] > arr[mid+1])
    {
        e= mid;
    }
    
    if (arr[mid-1]<arr[mid] && arr[mid]>arr[mid+1] )
    {        
        ans = arr[mid];
        return ans;   
    }
    mid = s +(e-s)/2;
    }
}
int total(int f, int l)
{
    int total = (l-f) +1;
    return total;
}
    int main()
    {
        int arr[]={2,3,4,6,9,8,7,6,2,1,'\0'},n,size=0;
        int i = 0;
        while (arr[i] != '\0')
        {
            i++;
            size++;
        } 
        printf("%d \n",size);
        printf("peak : %d",mountain(arr, size));
        return 0;
    }