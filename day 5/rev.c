#include<stdio.h>
int main()
{
    int a,rev=0;
    printf("enter the number:");
    scanf("%d",&a);
    while(a!=0)
    {
        rev=rev*10+a%10;
        a/=10;
    }
    printf("enter:%d \n",rev);
    return 0;
}