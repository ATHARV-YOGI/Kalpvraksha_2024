#include<stdio.h>


void swap(int *a, int *b){
    int temp=*a;
    *a=*b;
    *b=temp;
}

void show(int *arr, int n){
    for(int i=0;i<n;i++){
        printf("%d",arr[i]);
    }
}

void selection_sort(int *arr, int n){
    for(int i=0;i<n-1;i++){
        int max=0;
        for(int j=0;j<n-i;j++){
          if(arr[j]>arr[max]){
            max=j;
          }
        }
        
        swap(&arr[n-i-1],&arr[max]);
        
    }
}


void main(){
    int n,arr[100];

    printf("enter the value of n:");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    
    selection_sort(arr,n);

    show(arr,n);

}