#include <stdio.h>

int main(){

    for (int i = 1; i <= 9; ++i)
    {
        for (int j = 1; j <= 9-i+1; ++j)
        {
            if (j%2!= 0)
            {
                printf("@");
            }
            else
            {
            printf("%d",i);
            }
            
        }  
        printf("\n");      
    }
    return 0;
}