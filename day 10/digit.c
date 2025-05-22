#include<stdio.h>
int digit(int n)
{
    int a=1;
    if(n==0)
    {    
        return 0;
    }
return a+digit(n/10);
    
}
int main()
{
    printf("%d",digit(12345));
    return 0;
}