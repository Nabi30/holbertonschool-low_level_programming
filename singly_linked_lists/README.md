
# <p align="center">C - Singly linked lists</p>



<p align="center">Linked Lists vs Arrays:

Arrays are like apartments in a large building. Each apartment (element) has a specific number (index), and you can quickly find any apartment by its number. However, if you want to add more apartments, you can’t unless there’s empty space next to it. If the building is full, you can’t add more without a lot of work (resizing the array).
Linked Lists are more like a treasure hunt. Each clue (node) leads you to the next one. You can easily add more clues anywhere in the hunt by just changing where the previous clue points. But if you want to find the 10th clue, you have to follow all the clues from the beginning, which takes longer.
When to use them:

Use arrays when you need fast access to elements using indexes, like checking who lives in apartment #204 instantly.
Use linked lists when you need to add or remove elements a lot, like changing the order of clues in a treasure hunt frequently.
Building and Using Linked Lists:

Creating a Node:
Think of a node like a box with two parts: one part holds your treasure (value), and the other part has a map to the next box (pointer to the next node).
Creating the Linked List:
Start with the head, which is the first box in your treasure hunt. It leads to the next box and so on.
The tail is the last box and its map points to “Nowhere” (NULL), indicating the end of the hunt.
Using the Linked List:
To add a box, just change the map in the previous box to point to your new box.
To remove a box, change the map in the box before it to skip over the one you’re removing and point to the next one after it.</p>

<p>#include <stdio.h>
#include <stdlib.h>

// Define the Node structure
typedef struct Node {
    int value;
    struct Node* next;
} Node;

// Function to create a new Node
Node* createNode(int value) {
    Node* newNode = (Node*)malloc(sizeof(Node));
    newNode->value = value;
    newNode->next = NULL;
    return newNode;
}

// Function to append a Node to the linked list
void append(Node** head, int value) {
    Node* newNode = createNode(value);
    if (*head == NULL) {
        *head = newNode;
    } else {
        Node* current = *head;
        while (current->next != NULL) {
            current = current->next;
        }
        current->next = newNode;
    }
}

// Function to print the linked list
void printList(Node* node) {
    while (node != NULL) {
        printf("%d -> ", node->value);
        node = node->next;
    }
    printf("NULL\n");
}

int main() {
    Node* head = NULL;

    // Add some values to the linked list
    append(&head, 1);
    append(&head, 2);
    append(&head, 3);

    // Print the linked list
    printList(head);

    // Free the allocated memory
    Node* current = head;
    Node* next;
    while (current != NULL) {
        next = current->next;
        free(current);
        current = next;
    }

    return 0;
}
</p>
# <p align="center">This C program defines a Node structure with an int value and a pointer to the next Node. It includes functions to create a new node, append a node to the end of the list, and print the list. The main function demonstrates how to use these functions to create a linked list, add nodes to it, and then print and free the list. Remember to always free the memory you’ve allocated when you’re done with it to prevent memory leaks. If you have any questions or need further assistance, feel free to ask!</p>
