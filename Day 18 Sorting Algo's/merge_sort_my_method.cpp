#include<iostream>
using namespace std;

void merging(int *arr,int start, int mid, int end){
    int temp[end-start+1];
    int i,j,k=0;

    for(i=start,j=mid+1;i<=mid && j<=end;k++){
        if(arr[i]<arr[j]){
            temp[k]=arr[i++];
        }
        else{
            temp[k]=arr[j++];
        }
        
    }
    while(i<=mid){
        temp[k++]=arr[i++];
        }

        while(j<=end){
            temp[k++]=arr[j++];
        }

        for(i=0,j=start;j<=end;i++,j++){
            arr[j]=temp[i];
        }
}
void merge_sort(int *arr,int start,int end){
    if(start>=end){
        return;
    }

    int mid = start + (end - start) / 2;

    merge_sort(arr,start,mid);
    merge_sort(arr,mid+1,end);

    merging(arr,start,mid,end);
}




void show(int *arr,int n){
    for(int i =0 ; i<n;i++){
        cout<<arr[i]<<" ";
    }
}


int main(){
    int arr[]={3,2,5,6,1};
    int n=sizeof(arr)/sizeof(arr[0]);
    merge_sort(arr,0,n-1);
    show(arr,n);
}