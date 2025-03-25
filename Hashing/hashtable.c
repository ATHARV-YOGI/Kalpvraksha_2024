#include <stdio.h>
#include <stdlib.h>

 

typedef struct Node {
    int data;
    struct Node* next;
} Node;

Node* hashTable[10];

int hashFunction(int key) {
    return key % 10;
}

void insert(int value) {
    int index = hashFunction(value);

    // new node
    Node* newNode = (Node*)malloc(sizeof(Node));
    newNode->data = value;
    newNode->next = NULL;

    // if linked list null
    if (hashTable[index] == NULL) {
        hashTable[index] = newNode;
    } else {
        newNode->next = hashTable[index];
        hashTable[index] = newNode;
    }
}


int search(int value) {
    int index = hashFunction(value);
    Node* temp = hashTable[index];

    while (temp != NULL) {
        if (temp->data == value) {
            return 1;  
        }
        temp = temp->next;
    }
    return 0;  
}


void delete(int value) {
    int index = hashFunction(value);
    Node* temp = hashTable[index];
    Node* prev = NULL;

    while (temp != NULL && temp->data != value) {
        prev = temp;
        temp = temp->next;
    }

    if (temp == NULL) {
        printf("Element not found\n");
        return;
    }

    
    if (prev == NULL) {
        hashTable[index] = temp->next;
    } else {
        prev->next = temp->next;
    }
    free(temp);
}


void display() {
    for (int i = 0; i < 10; i++) {
        printf("Index %d: ", i);
        Node* temp = hashTable[i];
        while (temp) {
            printf("%d -> ", temp->data);
            temp = temp->next;
        }
        printf("NULL\n");
    }
}


int main() {
    
    for (int i = 0; i < 10; i++) {
        hashTable[i] = NULL;
    }

    
    insert(10);
    insert(20);
    insert(30);
    insert(40);
    insert(25);
    insert(35);
    insert(45);
    insert(55);

    
    printf("Hash Table:\n");
    display();

    
    int key = 20;
    if (search(key)) {
        printf("%d is found in the hash table\n", key);
    } else {
        printf("%d is not found in the hash table\n", key);
    }

    
    printf("Deleting 20 : \n");
    delete(20);
    display();

    return 0;
}
