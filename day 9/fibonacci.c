#include<stdio.h>
int fibonacci(int n)
{
    int a=0,b=1,c;
    printf("enter the number:\n ");
    for(int i=0;i<n;i++)
    {
         printf("%d\n",a);
         c=a+b;
         a=b;
         b=c;
    }
     return a;
}
int main()
{
    fibonacci(5);
    return 0;
}