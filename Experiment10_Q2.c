//Write a program to insert item in middle of the linked list.
#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *next;
};

struct Node *createNode(int data) {
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    if (newNode == NULL) {
        printf("Memory allocation failed!\n");
        exit(1);
    }
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

void insertAtPosition(struct Node **head, int data, int position) {
    struct Node *newNode = createNode(data);

    if (position <= 1 || *head == NULL) {
        newNode->next = *head;
        *head = newNode;
        return;
    }

    struct Node *current = *head;
    int count = 1;

    while (current != NULL && count < position - 1) {
        current = current->next;
        count++;
    }

    if (current == NULL) {
        printf("Position out of bounds. Inserting at the end.\n");
        struct Node *temp = *head;
        while(temp->next != NULL) {
            temp = temp->next;
        }
        temp->next = newNode;
        return;
    }

    newNode->next = current->next;
    current->next = newNode;
}

void displayList(struct Node *head) {
    struct Node *current = head;
    if (current == NULL) {
        printf("List is empty.\n");
        return;
    }
    printf("Linked List: ");
    while (current != NULL) {
        printf("%d -> ", current->data);
        current = current->next;
    }
    printf("NULL\n");
}

int main() {
    struct Node *head = NULL;

    insertAtPosition(&head, 10, 1);
    insertAtPosition(&head, 20, 2);
    insertAtPosition(&head, 40, 3);
    insertAtPosition(&head, 50, 4);

    printf("Original ");
    displayList(head);
    
    int dataToInsert = 30;
    int middlePosition = 3;
    insertAtPosition(&head, dataToInsert, middlePosition);

    printf("After inserting %d at position %d: ", dataToInsert, middlePosition);
    displayList(head);

    insertAtPosition(&head, 5, 1);
    printf("After inserting 5 at position 1: ");
    displayList(head);

    insertAtPosition(&head, 60, 100);
    printf("After inserting 60 at a large position: ");
    displayList(head);

    struct Node *temp;
    while (head != NULL) {
        temp = head;
        head = head->next;
        free(temp);
    }

    return 0;
}