#include <stdio.h>
#include <stdlib.h>

struct node
{
    int value;
    struct node *next;
};
typedef struct node node;

// Verify if likedList is null or empty
int isEmpty(node *linkedList)
{
    if (linkedList->next == NULL)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

// Generate linkedList firstNode
void generate(node *linkedList)
{
    linkedList->next = NULL;
}

void release(node *linkedList)
{
    if (!isEmpty(linkedList))
    {
        node *nextNode, *currentNode;
        currentNode = linkedList->next;
        while (currentNode != NULL)
        {
            nextNode = currentNode->next;
            free(currentNode);
            currentNode = nextNode;
        }
        free(currentNode);
        free(linkedList);
    }
}

void showList(node *linkedList)
{
    if (isEmpty(linkedList))
    {
        printf("List is empty.\n\n");
        return;
    }
    node *temp;
    temp = linkedList->next;

    while (temp != NULL)
    {
        printf("%d", temp->value);
        temp = temp->next;
    }
    printf("\n\n");
}