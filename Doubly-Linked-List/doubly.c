#include <stdio.h>
#include <stdlin.h>

struct Node{
    int data;
    struct Node* prev;
    struct Node* next;
}

struct Node* createNode(int value){
    struct Node* newNode = malloc(sizeof(struct Node));

    newNode->data = value;
    newNode->prev = NULL;
    newNode->next = NULL;

    return newNode;
}

struct Node* head = NULL;

void insertAtBegginning(struct Node** head, int value){
    struct Node* newNode = createNode(value);

    if(*head == NULL){
        *head = newNode;
        return;
    }
    newNode-next= *head;
    (*head)->prev = newNode;
    *head = newNode;
}