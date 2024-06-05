#include<stdio.h>
// int search(int arr[],int size,int n)
// {
//     int s=0,e=size-1;
//     int mid = s +(e-s)/2;
//     while (s<=e)
//     {
//     if (arr[mid] == n)
//     {
//         return mid;
//     }
//     else if (arr[mid] < n)
//     {
//         s = mid +1;
//     }
//     else
//     {
//         e = mid -1;
//     }
//     mid = s +(e-s)/2;
//     } 
//     return -1;
// }
int first(int arr[],int size,int n)
{
    int s=0,e=size-1,ans=-1;
    int mid = s +(e-s)/2;
    while (s<=e)
    {
    if (arr[mid] == n)
    {
        ans = mid;
        e=mid -1;
    }
    else if (arr[mid] < n)
    {
        s = mid +1;
    }
    else
    {
        e = mid -1;
    }
    mid = s +(e-s)/2;
    }
    return ans;   
}
int last(int arr[],int size,int n)
{
    int s=0,e=size-1,ans=-1;
    int mid = s +(e-s)/2;
    while (s<=e)
    {
    if (arr[mid] == n)
    {
        ans = mid;
        s=mid +1;
    }
    else if (arr[mid] < n)
    {
        s = mid +1;
    
    }
    else
    {
        e = mid -1;
    }
    mid = s +(e-s)/2;
    
    }
    return ans;   
}
int total(int f, int l)
{
    int total = (l-f) +1;
    return total;
}
    int main()
    {
        int arr[]={1,2,3,4,5,5,7,8,9},n;
        printf("Search :\n");
        scanf("%d",&n);
        int f =first(arr, 9, n);
        int l =last(arr, 9, n);
        printf("start :%d End : %d \ntotal : %d",f,l,total(f,l));
        return 0;
    }