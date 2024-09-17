/*
 * This program illustrates using a Linked List.
 *
 */

#include <stdio.h>
#include <stdlib.h>
#include <cs50.h>

// Goal: Create a list that contains numeric values.
// [ 5 ]->[ 3 ]->[ 12 ]->NULL

typedef struct node
{
    int data;
    struct node* next;
} Node;

// Things to do with a linked list.
// (each of these will be functions)
//
// 0. where is the start of the list?
// 1. create (and initialize) a Node
// 2. Add a node to the linked list (i.e. insert)
// 3. Traverse the list (print)
// 4. delete (and free) every node in the list.

Node* root = NULL;  // global: starting point for our linked list

Node* create_node(int value);
void insert(Node* n);
void print_list();
void delete_list(Node *n);

int main(void)
{
    int items = get_int("How many items in your list? ");
    for(int i=0; i < items; i++)
    {
        int value = get_int("Enter a number: ");
        Node* n = create_node(value);
        insert(n);
    }

    print_list();
    delete_list(root);
}


Node* create_node(int value)
{
    // 1. Allocate memory to store a node.
    Node* n = malloc(sizeof(Node));

    // 2. Initialize the node's attributes
    n->data = value;
    n->next = NULL;
    return n;
}

void insert(Node* n)
{
    // Is the list empty?
    if(root == NULL)
    {
        root = n;   // root -> [n]
    }
    else
    {
        // where we start:      root -> [x]
        // where we want to go: root -> [n] -> [x]
        n->next = root;
        root = n;
    }
}

void print_list()    // a list traversal
{
    // Start at the beginning,
    Node* current = root;
    while(current != NULL)
    {
        // print each node's data attribute
        printf("[ %i ]->", current->data);

        // then go to the next node
        current = current->next;
    }
    printf("\n");
}

// Delete the list using recursion
void delete_list(Node* n)
{
    if(n != NULL)
    {
        delete_list(n->next);
        free(n);
    }
}
