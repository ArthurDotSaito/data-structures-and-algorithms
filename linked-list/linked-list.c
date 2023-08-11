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

void push(node *linkedList)
{
    node *newNode = (node *)malloc(sizeof(node));
    if (!newNode)
    {
        printf("There's no available memory.\n");
        exit(1);
    }
    printf("value to push: ");
    scanf("%d", &newNode->value);

    node *oldHead = linkedList->next;

    linkedList->next = newNode;
    newNode->next = oldHead;
}

void pop(node *linkedList)
{
    node *newNode = (node *)malloc(sizeof(node));
    {
        printf("There's no available memory.\n");
        exit(1);
    }
    printf("value to pop: ");
    scanf("%d", &newNode->value);
    newNode->next = NULL;
    if (isEmpty(linkedList))
    {
        linkedList->next = newNode;
    }
    else
    {
        node *temp = linkedList->next;
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = newNode;
    }
}

void linkedListMenu(node *linkedList, int option)
{
    switch (option)
    {
    case 0:
        release(linkedList);
        break;
    case 1:
        showList(linkedList);
        break;
    case 2:
        push(linkedList);
        break;
    case 3:
        pop(linkedList);
        break;
    case 4:
        generate(linkedList);
        break;
    default:
        printf("invalid command");
        break;
    }
}