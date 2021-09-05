/**
 * An example program that illustrates a Linked-list of integers.
 */
#include <stdio.h>
#include <stdlib.h>
#include <cs50.h>

// A single node in the list.
typedef struct node {
    int data;
    struct node *next;
} Node;

// Function to print the whole linked list.
void printList(Node* start);

// Delete the list
void deleteList(Node* n);


int main(void) {
    Node *root = NULL;
    Node *previous = NULL;
    Node *current = NULL;

    int num_items = 0;
    num_items = get_int("How many items do you want to keep? ");

    for(int i=0; i < num_items; i++) {
        // create a new node, and initial it's values
        current = malloc(sizeof(Node));
        current->data = get_int("Enter a number: ");
        current->next = NULL;

        // Remember the beginning of the list.
        if(i == 0) {
            root = current;
        } else {
            previous->next = current;
        }
        previous = current;
        //printList(root); // print our list?
    }

    printf("Deleting the list...\n");
    printList(root); // print our list.

    deleteList(root); // free up any memory we allocated.
}

// Visit every node in the list and print its contents.
void printList(Node* start) {

    Node* current = start;
    while(current != NULL) {
        printf("[%i]->", current->data);
        current = current->next;
    }
    printf("\n");
}

// Visit every node in the list and delete it from memory.
// Using RECURSION!
void deleteList(Node *n) {
    if(n != NULL) {
        deleteList(n->next);
    }
    free(n);
}