#include<stdio.h>
int main(){
    int arr[100]={10,20,30,40,50};
    int n=5;
    int num=35;
    int pos=1;
    for(int i=n;i>pos;i--){
        arr[i] = arr[i-1];
    }
    arr[pos]=num;
    n++;
    printf("array after insertion:\n");
    for(int i=0;i<n;i++){
        printf("%d",arr[i]);
    }

    return 0;
}

