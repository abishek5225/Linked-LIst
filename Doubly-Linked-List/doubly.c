#include <stdio.h>
#include <stdlin.h>

struct Node{
    int data;
    struct Node* prev;
    struct Node* next;
}

struct Node* createNode(int value){
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));


        if(newNode == NULL){
            printf("Memory allocation failed\n");
        }
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
    newNode->next= *head;
    (*head)->prev = newNode;
    *head = newNode;
}

void insertAtEnd(struct Node **head, int value){
    struct Node *newNode = createNode(value);
    struct Node *temp = *head;

    if(*head == NULL){
        *head = newNode;
        return;
    }

    while(temp->next !=NULL){
        temp = temp->next;
    }

     temp->next = newNode;
     newNode->prev = temp;
}

void displayBackward(struct Node *head){
    struct Node *temp = head;

    if (temp == NULL) return;

    while(temp->next != NULL){
        printf("%d <-> ", temp->data);
        temp = temp->prev;
    }
    printf("Null\n");
}

void deleteNode(struct Node **head, int value){
    
}