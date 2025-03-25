#include<stdio.h>

void swap(int *a, int *b){
    *a=*a^*b;
    *b=*a^*b;
    *a=*a^*b;
}



void show(int *arr, int n){
    for(int i=0;i<n;i++){
        printf("%d",arr[i]);
    }
}

void bubble_sort(int *arr, int n){
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i;j++){
            if(arr[j]>arr[j+1]){
                swap(&arr[j],&arr[j+1]);
            }
        }
    }
}



void main(){

    int n,arr[100];
    printf("give the value of n:");
    scanf("%d",&n);
    printf("give me n elements for sorting:\n");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    bubble_sort(arr,n);
    show(arr,n);

}