#include<stdio.h>

void show(int *arr, int n ){
    for(int i =0;i<n;i++){
        printf("%d",arr[i]);
    }
}

int main(){
    int arr[100],n;

    printf("enter the no of the element's you want to insert in the array:");
    scanf("%d",&n);

    for(int i = 0; i<n; i++){
        scanf("%d",&arr[i]);
    }

    show(arr,n);    
}