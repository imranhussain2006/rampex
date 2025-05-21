#include<stdio.h>
int divives(int n)
{
    int i,sum=0;
    for(i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            sum+=i;
        }
    }
    return sum;
    }
    int main()
    {
         printf("%d\n",divives(8));
         return 0;
    }