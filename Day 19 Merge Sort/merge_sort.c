#include<stdio.h>
#include<stdlib.h>


 void merging(int *arr, int *left, int *right){

    int lsize = sizeof(left)/sizeof(left[0]);
   int rsize = sizeof(right)/sizeof(right[0]);
    int i =0;
    int j=0;
    int k =0;
    while(i< lsize && j<rsize){
        if(left[i]<right[j]){
            arr[k]= left[i];
            i++;
            k++;
        }
        else{
            arr[k]=right[j];
            j++;
            k++;
        }
    }

    while(i<lsize){
        arr[k]=left[i];
        i++;
        k++;
    }

    while(j<rsize){
        arr[k]=right[j];
        j++;
        k++;
    }

 }

void merge_sort(int *arr, int start, int end){
    int mid = (start + end)/2;
    
    if(start>=end){
        return ;
    }
    
    int *left = (int*) malloc(end*sizeof(int));
    int *right = (int*) malloc(end*sizeof(int));
    for(int i=start;i<mid-1;i++){
        left[i]=arr[i];
    }
    
    for(int i=mid;i<end;i++){
        right[i]=arr[i];
    }
    merge_sort(arr,start,mid-1);
    merge_sort(arr,mid,end);
    merging(arr,left,right);
}

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

    merge_sort(arr,0,n);
    show(arr,n); 

    return 0;

}