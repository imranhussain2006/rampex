#include<stdio.h>
int reverse(int n,int rev)
{
    if(n==0)
    {
        return rev;
    }
     rev=rev*10+n/10;
     return reverse(n/10,rev);
    }
    int main()
    {
        reverse(121,0);
        printf("reverse number:%d",reverse);
        return 0;
    }