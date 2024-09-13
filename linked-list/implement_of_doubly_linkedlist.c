/**
 * @file implement_of_doubly_linkedlist.c
 * @brief Implementation of a doubly linked list in C
 *
 * This file contains the implementation of a doubly linked list data structure,
 * including functions for creating nodes, inserting nodes at the beginning and end,
 * and printing the list.
 */

#include <stdio.h>
#include <stdlib.h>

/**
 * @struct Node
 * @brief Represents a node in the doubly linked list
 *
 * This structure defines a node in the doubly linked list, containing an integer
 * data value and pointers to the previous and next nodes.
 */
struct Node
{
    int data;          /**< The integer data stored in the node */
    struct Node *prev; /**< Pointer to the previous node in the list */
    struct Node *next; /**< Pointer to the next node in the list */
};

/**
 * @brief Creates a new node with the given data
 *
 * @param data The integer data to be stored in the new node
 * @return struct Node* Pointer to the newly created node
 */
struct Node *createNode(int data)
{
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->prev = NULL;
    newNode->next = NULL;
    return newNode;
}

/**
 * @brief Inserts a new node with the given data at the beginning of the list
 *
 * @param head Pointer to the pointer of the head of the list
 * @param data The integer data to be inserted
 */
void insertAtBeginning(struct Node **head, int data)
{
    struct Node *newNode = createNode(data);
    if (*head == NULL)
    {
        *head = newNode;
    }
    else
    {
        newNode->next = *head;
        (*head)->prev = newNode;
        *head = newNode;
    }
}

/**
 * @brief Inserts a new node with the given data at the end of the list
 *
 * @param head Pointer to the pointer of the head of the list
 * @param data The integer data to be inserted
 */
void insertAtEnd(struct Node **head, int data)
{
    struct Node *newNode = createNode(data);
    if (*head == NULL)
    {
        *head = newNode;
    }
    else
    {
        struct Node *temp = *head;
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = newNode;
        newNode->prev = temp;
    }
}

/**
 * @brief Prints the elements of the doubly linked list
 *
 * @param head Pointer to the head of the list
 */
void printList(struct Node *head)
{
    struct Node *temp = head;
    while (temp != NULL)
    {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}

/**
 * @brief Main function to demonstrate the usage of the doubly linked list
 *
 * This function creates a doubly linked list, inserts elements at the beginning
 * and end, and prints the list after each operation.
 *
 * @return int Returns 0 on successful execution
 */
int main()
{
    struct Node *head = NULL;

    // Insert elements at the beginning
    insertAtBeginning(&head, 3);
    insertAtBeginning(&head, 2);
    insertAtBeginning(&head, 1);

    printf("Doubly linked list: ");
    printList(head);

    // Insert elements at the end
    insertAtEnd(&head, 4);
    insertAtEnd(&head, 5);

    printf("Doubly linked list after inserting at end: ");
    printList(head);

    return 0;
}