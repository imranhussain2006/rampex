#include<stdio.h>
int power(int m,int n)
{
    int i,pow=1;
    for(i=0;i<n;i++)
    {
        pow*=m;
    }
return pow;
    }
    int main()
    {
        printf("power of value:%d", power(2,4));
        return 0;
    }