#include<stdio.h>

void show(int *arr, int n){
      for(int i=0;i<n;i++){
        printf("%d\t",arr[i]);
      }
}

void insertion_sort(int *arr, int n){
    int temp=0;
     for(int i=0;i<n-2;i++)   {
        if(arr[i+1]<arr[i]){
            temp=arr[i+1];
            arr[i+1]=arr[i];
                
            for(int j=i;j>0;j--){
                
                if(temp<arr[j-1]){
                    
                    arr[j]=arr[j-1];
    
                }
                else 
                {  
                  arr[j]=temp;
                  break;
                }    
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