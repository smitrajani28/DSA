#include<stdio.h>

    int main()
    {
        int arr[]={10,30,50,40,67,75,65,34,56,55},n= 10;
        int temp;
        for (int i = 1; i < n; i++)
        {
            for (int j = i-1; j >=0; j--)
            {
                if (arr[j]>arr[j+1])
                {
                    temp = arr[j+1];
                    arr[j+1] = arr[j];
                    arr[j] = temp;
                }
                else
                {
                    break;
                }
                
            }
            
        }
        for (int i = 0; i < n; i++)
        {
            printf("%d ",arr[i]);
        }
        
        
        return 0;
    }