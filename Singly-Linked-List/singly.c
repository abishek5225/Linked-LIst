#include <stdio.h>
#include <stdlib.h>

struct Node{
    int data;
    struct Node* next;//pointer to store the address of another node for link creation
};

struct Node* createNode(int value){
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = value; //accessing struct member 
    newNode->next = NULL;

    return newNode;

}

void insertAtBeggining(struct Node** head, int value) {
    struct Node* newNode = createNode(value);
    newNode->next = *head;
    *head = newNode;
}