#include<stdio.h>
int search(int arr[],int start,int end,int n)
{
    int s=start ,e=end;
    int mid = s +(e-s)/2;
    while (s<=e)
    {
    if (arr[mid] == n)
    {
        return mid;
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
    return -1;
}

int pivot(int arr[],int size)
{
    int s=0,e=size;
    int mid = s +(e-s)/2;
    while (s<e)
    {
        if (arr[mid]>=arr[0])
        {
            s=mid +1;
        }
        else
        {
            e=mid;
        }
        mid = s +(e-s)/2;
    }
    return mid;
}
    int main()
    {
        int arr[]={4,6,9,1,2,'\0'},n,size=0;
        int i = 0,p,f=-1;
        while (arr[i] != '\0')
        {
            i++;
            size++;
        }
        printf("search :");
        scanf("%d",&n);
        p = pivot(arr,size);
        printf("pivot is at %d possition\n",p);
        if (arr[p]<= n && n <=arr[size-1])
        {
            f=search(arr,p,size-1,n);
        }
        else  if (arr[0]<= n && n <=arr[p])
        {
            f=search(arr,0,p-1,n);
        }
        printf("%d",f);
        return 0;
    }