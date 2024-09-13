/**
 * @file implementation_of_singly_linkedlist.c
 * @brief Implementation of a singly linked list in C
 *
 * This file contains the implementation of a singly linked list data structure,
 * including various operations such as insertion, deletion, searching, and traversal.
 */

#include <stdio.h>
#include <stdlib.h>

/**
 * @struct Node
 * @brief Represents a node in the singly linked list
 *
 * Each node contains an integer data value and a pointer to the next node.
 */
struct Node
{
    int data;          /**< The data stored in the node */
    struct Node *next; /**< Pointer to the next node in the list */
};

/**
 * @brief Adds a new node with the given data to the end of the list
 *
 * @param head Pointer to the pointer of the head of the list
 * @param data The data to be stored in the new node
 */
void addNode(struct Node **head, int data)
{
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    struct Node *last = *head;

    newNode->data = data;
    newNode->next = NULL;

    if (*head == NULL)
    {
        *head = newNode;
        return;
    }

    while (last->next != NULL)
    {
        last = last->next;
    }

    last->next = newNode;
}

/**
 * @brief Inserts a new node with the given data at the beginning of the list
 *
 * @param head Pointer to the pointer of the head of the list
 * @param data The data to be stored in the new node
 */
void insertAtFirst(struct Node **head, int data)
{
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = *head;
    *head = newNode;
}

/**
 * @brief Inserts a new node with the given data at the end of the list
 *
 * @param head Pointer to the pointer of the head of the list
 * @param data The data to be stored in the new node
 */
void insertAtLast(struct Node **head, int data)
{
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    struct Node *last = *head;
    newNode->data = data;
    newNode->next = NULL;

    if (*head == NULL)
    {
        *head = newNode;
        return;
    }

    while (last->next != NULL)
    {
        last = last->next;
    }

    last->next = newNode;
}

/**
 * @brief Searches for a target value in the list
 *
 * @param head Pointer to the head of the list
 * @param target The value to search for
 * @return The index of the target if found, -1 otherwise
 */
int search(struct Node *head, int target)
{
    struct Node *current = head;
    int index = 0;
    while (current != NULL)
    {
        if (current->data == target)
        {
            return index;
        }
        current = current->next;
        index++;
    }
    return -1; // Return -1 if the target is not found
}

/**
 * @brief Inserts a new node with the given data at the specified index
 *
 * @param head Pointer to the pointer of the head of the list
 * @param data The data to be stored in the new node
 * @param index The position at which to insert the new node
 */
void insertAtIndex(struct Node **head, int data, int index)
{
    if (index < 0)
    {
        printf("Invalid index\n");
        return;
    }

    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    newNode->data = data;

    if (index == 0)
    {
        newNode->next = *head;
        *head = newNode;
        return;
    }

    struct Node *current = *head;
    int i;
    for (i = 0; i < index - 1 && current != NULL; i++)
    {
        current = current->next;
    }

    if (current == NULL)
    {
        printf("Index out of bounds\n");
        free(newNode);
        return;
    }

    newNode->next = current->next;
    current->next = newNode;
}

/**
 * @brief Removes the first occurrence of a node with the given key
 *
 * @param head Pointer to the pointer of the head of the list
 * @param key The value to be removed from the list
 */
void removeNode(struct Node **head, int key)
{
    struct Node *temp = *head;
    struct Node *prev = NULL;

    if (temp != NULL && temp->data == key)
    {
        *head = temp->next;
        free(temp);
        return;
    }

    while (temp != NULL && temp->data != key)
    {
        prev = temp;
        temp = temp->next;
    }

    if (temp == NULL)
    {
        return;
    }

    prev->next = temp->next;
    free(temp);
}

/**
 * @brief Removes the first node of the list
 *
 * @param head Pointer to the pointer of the head of the list
 */
void removeFirst(struct Node **head)
{
    if (*head == NULL)
    {
        printf("List is empty\n");
        return;
    }

    struct Node *temp = *head;
    *head = (*head)->next;
    free(temp);
}

/**
 * @brief Removes the last node of the list
 *
 * @param head Pointer to the pointer of the head of the list
 */
void removeLast(struct Node **head)
{
    if (*head == NULL)
    {
        printf("List is empty\n");
        return;
    }

    if ((*head)->next == NULL)
    {
        free(*head);
        *head = NULL;
        return;
    }

    struct Node *second_last = *head;
    while (second_last->next->next != NULL)
    {
        second_last = second_last->next;
    }

    free(second_last->next);
    second_last->next = NULL;
}

/**
 * @brief Removes the node at the specified index
 *
 * @param head Pointer to the pointer of the head of the list
 * @param index The position of the node to be removed
 */
void removeAtIndex(struct Node **head, int index)
{
    if (*head == NULL)
    {
        printf("List is empty\n");
        return;
    }

    if (index < 0)
    {
        printf("Invalid index\n");
        return;
    }

    struct Node *temp = *head;

    if (index == 0)
    {
        *head = temp->next;
        free(temp);
        return;
    }

    for (int i = 0; temp != NULL && i < index - 1; i++)
    {
        temp = temp->next;
    }

    if (temp == NULL || temp->next == NULL)
    {
        printf("Index out of bounds\n");
        return;
    }

    struct Node *next = temp->next->next;
    free(temp->next);
    temp->next = next;
}

/**
 * @brief Calculates the length of the list
 *
 * @param head Pointer to the head of the list
 * @return The number of nodes in the list
 */
int length(struct Node *head)
{
    int count = 0;
    struct Node *current = head;

    while (current != NULL)
    {
        count++;
        current = current->next;
    }

    return count;
}

/**
 * @brief Displays the contents of the list
 *
 * @param head Pointer to the head of the list
 */
void display(struct Node *head)
{
    struct Node *current = head;

    while (current != NULL)
    {
        printf("%d -> ", current->data);
        current = current->next;
    }
    printf("NULL\n");
}

/**
 * @brief Main function to demonstrate the usage of the linked list operations
 *
 * @return 0 on successful execution
 */
int main()
{
    struct Node *head = NULL;

    printf("Adding nodes to the linked list:\n");
    addNode(&head, 1);
    addNode(&head, 2);
    addNode(&head, 3);
    addNode(&head, 4);
    printf("Initial linked list: ");
    display(head);

    printf("\nLength of the linked list: %d\n", length(head));

    printf("\nRemoving node with value 3:\n");
    removeNode(&head, 3);
    printf("Linked list after removing 3: ");
    display(head);

    printf("\nInserting 0 at the beginning:\n");
    insertAtFirst(&head, 0);
    printf("Linked list after inserting 0 at first: ");
    display(head);

    printf("\nInserting 5 at the end:\n");
    insertAtLast(&head, 5);
    printf("Linked list after inserting 5 at last: ");
    display(head);

    printf("\nInserting 6 at index 2:\n");
    insertAtIndex(&head, 6, 2);
    printf("Linked list after inserting 6 at index 2: ");
    display(head);

    printf("\nRemoving the first node:\n");
    removeFirst(&head);
    printf("Linked list after removing first node: ");
    display(head);

    printf("\nRemoving the last node:\n");
    removeLast(&head);
    printf("Linked list after removing last node: ");
    display(head);

    printf("\nRemoving node at index 2:\n");
    removeAtIndex(&head, 2);
    printf("Linked list after removing node at index 2: ");
    display(head);

    printf("\nFinal length of the linked list: %d\n", length(head));

    int searchValue = 4;
    int result = search(head, searchValue);
    if (result != -1)
    {
        printf("\nValue %d found at index %d in the linked list\n", searchValue, result);
    }
    else
    {
        printf("\nValue %d not found in the linked list\n", searchValue);
    }

    // Free the memory allocated for the linked list
    while (head != NULL)
    {
        struct Node *temp = head;
        head = head->next;
        free(temp);
    }

    return 0;
}