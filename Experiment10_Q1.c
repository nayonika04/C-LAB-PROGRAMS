//Write a program to create a simple linked list in C using pointer and structure.
#include <stdio.h>
#include <stdlib.h> 

struct Node {
    int data;        
    struct Node *next; 
};

struct Node* createNode(int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    if (newNode == NULL) {
        printf("Memory allocation failed!\n");
        exit(1); 
    }
    newNode->data = data;
    newNode->next = NULL; 
    return newNode;
}

void printList(struct Node* head) {
    struct Node* current = head;
    while (current != NULL) {
        printf("%d -> ", current->data);
        current = current->next;
    }
    printf("NULL\n");
}

int main() {
    struct Node* head = NULL;

    struct Node* first = createNode(10);
    struct Node* second = createNode(20);
    struct Node* third = createNode(30);

    head = first;         
    first->next = second; 
    second->next = third; 
    third->next = NULL;   

    printf("Linked List: ");
    printList(head);

    struct Node* temp;
    while (head != NULL) {
        temp = head;
        head = head->next;
        free(temp);
    }

    return 0;
}