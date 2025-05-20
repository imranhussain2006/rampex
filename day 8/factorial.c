#include <stdio.h>

int factorial(int n)
{
    int fact=1;
    for(int i=1;i<=n;i++)
    {
        fact*=i;
    }
    return fact;
    }
int main()
{
    printf("factrial:%d\n",factorial(5));
    return 0;
}