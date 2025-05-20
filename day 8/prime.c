#include <stdio.h>

int prime(int n)
{
    if(n<2);
    {
        return 0;
    }
    for(int i=2;i<n/2;i++)
    {
        if(n%i==0);
    }
    return 0;
    }
int main()
{
    printf("prime:%d\n",prime(2));
    return 0;
}