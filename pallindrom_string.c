#include<stdio.h>
int pallindrom(char arr[], int n)
{
   for (int i = 0; arr[i] != '\0'; i++)
   {
        if (arr[i] != arr[n-1-i])
        {
            return 0;
        } 
   }
   return 1;  
}
    int main()
    {
        char arr[10];
        int n=0;
        printf("name :");
        scanf("%s",arr);
        for (int i = 0; arr[i] != '\0'; i++)
        {
            n++;
        }
        // printf("%s %d",arr,n);
        if (pallindrom(arr,n)== 1)
        {
        printf("string is pallindrom");
        }
        else
        {
        printf("string is not pallindrom");
        }
        
        
        return 0;
    }