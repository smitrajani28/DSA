#include<stdio.h>
void update(int *a)
{
    ++(*a);
}
    int main()
    {
        int a=5;
        update(&a);
        printf("%d",a);
        return 0;
    }