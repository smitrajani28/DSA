#include<stdio.h>
#include<stdlib.h>
        //in this program divide books to student that each have minimum pages compare to other cases
int possible(int arr[],int student,int n,int mid)
{
    int studentcount = 1;
    int pagesum = 0;
    for (int i = 0; i < n; i++)
    {
        if (pagesum + arr[i] <= mid)
        {
            pagesum += arr[i];
        }
        else
        {
            studentcount++;
            if (studentcount > student || arr[i] > mid)
            {
                return 0;

            }
            pagesum = arr[i];
        }
    }
     return 1;
    
}
int value(int arr[],int student,int n)
{
    int s=0;
    int sum=0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    int e=sum;
    int mid = s +(e-s)/2;
    int ans = -1;
    while (s<=e)
    {
        if (possible(arr,student,n,mid) == 1)
        {
            ans = mid;
            e=mid-1;
        }
        else
        {
            s = mid +1;
        }
        mid = s +(e-s)/2;
    }
    return ans;
    
}
    int main()
    {
        int *arr,n,student;
        int min;
        printf("Enter the no of books :");
        scanf("%d",&n);
        printf("Enter the size of book(in term of pages) :\n");
        arr=(int *)malloc(n*sizeof(int));
        for (int i = 0; i < n; i++)
        {
            printf("%d)",i+1);
            scanf("%d",&arr[i]);
        }
        printf("Enter no. of students :");
        scanf("%d",&student);
        min = value(arr,student,n);
        printf("%d",min);
        return 0;
    }