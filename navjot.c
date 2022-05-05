#include <stdio.h>
#include <stdlib.h>

/* Node of a doubly linked list */
struct Node
{
    int data;
    struct Node *next; // Pointer to next node in DLL
    struct Node *prev; // Pointer to previous node in DLL
};

int isPrime(int n)
{
    if (n <= 1)
        return 0;

    for (int i = 2; i < n; i++)
        if (n % i == 0)
            return 0;

    return 1;
}

void append(struct Node **head_ref, int new_data)
{
    /* 1. allocate node */
    struct Node *new_node = (struct Node *)malloc(sizeof(struct Node));

    struct Node *last = *head_ref; /* used in step 5*/

    /* 2. put in the data  */
    new_node->data = new_data;

    /* 3. This new node is going to be the last node, so
          make next of it as NULL*/
    new_node->next = NULL;

    /* 4. If the Linked List is empty, then make the new
          node as head */
    if (*head_ref == NULL)
    {
        new_node->prev = NULL;
        *head_ref = new_node;
        return;
    }

    /* 5. Else traverse till the last node */
    while (last->next != NULL)
        last = last->next;

    /* 6. Change the next of last node */
    last->next = new_node;

    /* 7. Make last node as previous of new node */
    new_node->prev = last;

    return;
}

// This function prints contents of linked list starting
// from the given node
void printList(struct Node* node)
{
    struct Node* last;
    printf("\nTraversal in forward direction \n");
    while (node != NULL) {
        printf(" %d ", node->data);
        last = node;
        node = node->next;
    }
 
    printf("\nTraversal in reverse direction \n");
    while (last != NULL) {
        printf(" %d ", last->data);
        last = last->prev;
    }
}

    void removePrimes(struct Node * head)
    {
        struct Node *curr = head;
        while (curr)
        {
            if (isPrime(curr->data))
            {
                curr->prev->next = curr->next;
                curr->next->prev = curr->prev;
            }
            curr = curr->next;
        }
    }

    int main()
    {
        struct Node *head = NULL;
        append(&head, 6);
        append(&head, 4);
        append(&head, 5);
        append(&head, 8);
        append(&head, 7);
        removePrimes(head);
        printf("Created DLL is: ");
        printList(head);
        return 0;
    }