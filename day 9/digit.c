#include<stdio.h>
int digit(int n)
{
  int count=0;
  if(n==0)
  {
      return 1;
  }
  while(n>0)
  {
      n=n/10;
      count ++;
  }
  return count;
}
int main()
{
    printf("number of count :%d",digit(123456));
    return 0;
}