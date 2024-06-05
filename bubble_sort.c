#include<stdio.h>

    int main()
    {
        int arr[]={10,30,50,40,67,75,65,34,56,55},n= 10;
        int temp;
        for (int i = 1; i < n; i++)
        {
            for (int j = 0; j < (n-i); j++)
            {
                if (arr[j]>arr[j+1])
                {
                    temp = arr[j];
                    arr[j] = arr[j+1];
                    arr[j+1] = temp;
                }
                
            }
            
        }
        for (int i = 0; i < n; i++)
        {
            printf("%d ",arr[i]);
        }
        
        
        return 0;
    }