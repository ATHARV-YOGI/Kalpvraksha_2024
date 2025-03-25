#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
void item_list();
void total_cost();
void item_quantity();
//Represents an item in the cart
typedef struct item_t
{
	char *item_name;
	int item_cost;
} item;

//Store the items in the cart array declared here.
item *cart[100];

int main() {
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%s,%d",cart[i]->item_name,&cart[i]->item_cost);
    }
    
    
    item_list();
    total_cost();
    item_quantity();
    

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}

void item_list(){
    printf("item list\n");
    for(int i=0;cart[i]->item_cost!='\0';i++){
        printf("%s,%d\n",cart[i]->item_name,cart[i]->item_cost);
    }
}

void total_cost(){
     int sum=0;
     for(int i=0;cart[i]->item_cost!='\0';i++){
         sum += cart[i]->item_cost;
     }
    printf("Total cost %d\n", sum);
}

void item_quantity(){
     
}