#include<stdio.h>

    int main()
    {
        int arr[]={10,30,50,40,67,75,65,34,56,55},n= 10;
        int temp;
        for (int i = 0; i < (n-1); i++)
        {
            for (int j = i; j < n; j++)
            {
                if (arr[j]<arr[i])
                {
                    temp = arr[i];
                    arr[i] = arr[j];
                    arr[j] = temp;
                }
                
            }
            
        }
        for (int i = 0; i < n; i++)
        {
            printf("%d ",arr[i]);
        }
        
        
        return 0;
    }