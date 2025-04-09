#include<stdio.h>

void string_reverse(char *name){
    
    int n = sizeof(name)/sizeof(name[0]);
    printf("%d",n);
    for(int i = n+6; i >= 0 ; i--){
        printf("%c",name[i]);
        

    }
}

void main(){
    char name[]= "Atharv Yogi";
    int n = sizeof(name)/sizeof(name[0]);
    printf("%d",n);
    string_reverse(name);
    
}