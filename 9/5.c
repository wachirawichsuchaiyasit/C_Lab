#include <stdio.h>
#include <stdlib.h>

typedef struct Node
{
    int value;
    struct Node *next;
} node;

void printList(node *pList)
{
    node *current = pList;
    while (current != NULL)
    {
        printf("%d ",current->value);
        current = current->next;
    }
    printf("\n");
};

void insertNode(node **pList, int val)
{
    node *newnode = (node *)malloc(sizeof(node));
    newnode->value = val;
    newnode->next = NULL;

    if (*pList == NULL)
    {
        *pList = newnode;
        // printf("A new node");
        // printf("\n");
        return;
    }

    node *current = *pList;
    node *prev = NULL;

    // add to frist
    if (newnode->value < current->value)
    {
        newnode->next = current;
        *pList = newnode;
        // printf("Add to first list\n");
        return;
    }

    // find the position node
    while (current->next != NULL && current->value < newnode->value)
    {
        // printf("---------------\n");
        // printf("data:\n");
        prev = current;
        // printf("pre node val : %d \n", prev->value);

        current = current->next;
        // printf("current next  node val : %d \n", current->value);

        // printf("---------------\n");
        if (current->value > newnode->value)
        {
            // printf("---Insert to middle---\n");
            prev->next = newnode;
            // printf("pre next node val : %d\n", prev->next->value);
            newnode->next = current;
            // printf("newnode next node val : %d\n", newnode->next->value);
            // printf("---------------\n");
            return;
        }
    }

    // add last node ;
    // printf("Add to last list\n");
    current->next = newnode;
}

int main()
{
    int i, value;
    node *pList = NULL;

    for (i = 0; i < 10; i++)
    {
        scanf(" %d", &value);
        insertNode(&pList, value);
    }

    printList(pList);
}