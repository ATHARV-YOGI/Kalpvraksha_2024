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
        int min=i;
        for(int j=i;j<n;j++){
          if(arr[j]<arr[min]){
            min=j;
          }
        }
        
        swap(&arr[i],&arr[min]);
        
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