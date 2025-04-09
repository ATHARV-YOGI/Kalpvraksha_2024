#include<stdio.h>

int sum_odd(char *num, int n){
    int i=0,number=0,sum=0;
    while(i<n){
        if(num[i] == ' ' || num[i] == '\0'){
            if(number % 2 == 1) sum += number;
            
            number = 0;
        }
        else{
        number = number * 10 + num[i]-48; 
        }
        i++;
        
    }

    return sum;
}

void main(){
     char num[] = "12 13 15 246 98 46 7";
     int n = sizeof(num)/sizeof(num[0]);
     int sum = sum_odd(num,n);
     printf("%d",sum);
}