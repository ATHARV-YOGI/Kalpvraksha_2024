#include<stdio.h>

void string_reverse(char *name, int n){
    int i=0,j=n-2;
    char temp;

    while(i<j){
       temp = name[i];
       name[i] = name[j];
       name[j]= temp;

       i++;
       j--;
    }

    }


void main(){
    char name[]= "Atharv Yogi";
    int n = sizeof(name);
    string_reverse(name, n);

    printf("%s",name);
    
}