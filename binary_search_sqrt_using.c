#include<stdio.h>
int search(int n)
{
    int s=1,e=n;
    int mid = s +(e-s)/2;
    int ans;
    while (s<=e)
    {
    if ((mid*mid)<=n)
    {
        ans = mid;
        s=mid+1;
    }
    else if ((mid*mid)>n)
    {
        e = mid -1;
    }
    mid = s +(e-s)/2;
    } 
    return ans;
}
float perfect_sqrt(float sqrt,int n)
{
    float temp=sqrt;
        for (int i = 1; i <= 10; i++)
        {
            temp=temp+ 0.1;
            if ((temp*temp)<=n)
            {
                sqrt= temp;
            }
            else
            {
                break;
            }
        }
        temp=sqrt;
        for (int i = 1; i <= 10; i++)
        {
            temp=temp+ 0.01;
            if ((temp*temp)<=n)
            {
                sqrt= temp;
            }
            else
            {
                break;
            }
        }
        temp=sqrt;
        for (int i = 1; i <= 10; i++)
        {
            temp=temp+ 0.001;
            if ((temp*temp)<=n)
            {
                sqrt= temp;
            }
            else
            {
                break;
            }
        }
        temp=sqrt;
        for (int i = 1; i <= 10; i++)
        {
            temp=temp+ 0.0001;
            if ((temp*temp)<=n)
            {
                sqrt= temp;
            }
            else
            {
                break;
            }
        }
        return sqrt;
}
    int main()
    {
        int n;
        float sqrt;
        printf("Enter a number : ");
        scanf("%d",&n);
        sqrt= search(n);
        sqrt=perfect_sqrt(sqrt,n);
        printf("%.4f",sqrt);
        return 0;
    }