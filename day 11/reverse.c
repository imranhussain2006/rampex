#include<stdio.h>
void reverse(int n)
{
    if(n==0)
    {
        return ;
    }

     printf("%d\n",n);
     reverse(n-1);
    }
int main()
{
    printf("reverse value:\n");
    reverse(5);
    return 0;
}