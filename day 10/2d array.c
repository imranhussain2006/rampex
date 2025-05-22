#include<stdio.h>
int Array(int arr[2][2])
{
   int sum=0;
    printf("Array elements:\n");
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<2;j++)
    {
        printf("%d",arr[i][j]);
        sum+=arr[i][j];
    }
    printf("\n");    
    }
   return sum;
}
int main()
{
    int a[2][2]={ {1,3},{4,5} };
    Array(a);
    printf("sum of array element:%d",Array(a));
    return 0;
    }