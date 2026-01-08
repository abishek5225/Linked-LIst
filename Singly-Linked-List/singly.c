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

void insertAtEnd(struct Node** head, int value){
    struct Node* newNode = createNode(value);
    if(*head == NULL){
        *head = newNode;
        return;
    }

    struct Node* temp = *head;
    while(temp->next != NULL){
        temp = temp->next;
    }
    temp->next = newNode;
}

void deleteNode(struct Node** head, int value){
    struct Node* temp= *head;
    struct Node* prev = NULL;

    if(temp != NULL && temp->data == value){
        *head = temp->next;
        free(temp);
        return;
    }

    while(temp != NULL && temp->data != value){
        prev = temp;
        temp = temp->next;
    }
    if(temp == NULL){
        return;
    }
    
    prev->next = temp->next;
    free(temp);
}

void printList(struct Node* head){
    while(head != NULL){
        printf("%d -> ", head->data);
        head = head->next;
    }
    printf("NULL\n");
}

int main() {
    struct Node* head = NULL;
    insertAtBeggining(&head, 10);
    insertAtBeggining(&head, 20);
    insertAtEnd(&head, 30);
    insertAtEnd(&head, 40);

    printList(head);
}