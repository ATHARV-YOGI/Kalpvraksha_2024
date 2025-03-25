#include<stdio.h>

void show(int *arr, int n){
      for(int i=0;i<n;i++){
        printf("%d",arr[i]);
      }
}

void insertion_sort(int *arr, int n){
    int temp;
     for(int i=0;i<n;i++)   {
        for(int j=i+1;j<i;j--){
            if(j<i){
                temp=arr[j];
                arr[j]=arr[j-1];

            }
              
                
                
            }
        }
      }


void main(){

    int n, arr[100];

    printf("enter the value of n:");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    insertion_sort(arr,n);

    show(arr,n);
}