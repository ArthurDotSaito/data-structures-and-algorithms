#include <stdio.h>
#include <stdlib.h>

struct node
{
    int value;
    struct node *next;
};
typedef struct node node;

int isEmpty(node *linkedList);
void generate(node *linkedList);
void release(node *linkedList);
void showList(node *linkedList);
void push(node *linkedList);
void pop(node *linkedList);
void linkedListOption(node *linkedList, int option);
int linkedListMenu();

int main()
{
    node *linkedList = (node *)malloc(sizeof(node));
    if (!linkedList)
    {
        printf("There's no available memory.\n");
        exit(1);
    }
    generate(linkedList);
    int option;
    do
    {
        option = linkedListMenu();
        linkedListOption(linkedList, option);
    } while (option);
    free(linkedList);
    return 0;
}

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
        printf("%d ", temp->value);
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
    if (!newNode)
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

void linkedListOption(node *linkedList, int option)
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

int linkedListMenu()
{
    int option;
    printf("Choose an option:\n");
    printf("[0] - RELEASE:\n");
    printf("[1] - PRINT ELEMENTS:\n");
    printf("[2] - PUSH:\n");
    printf("[3] - POP:\n");
    printf("[4] - CLEAR LIST:\n");
    printf("Type a choice:");
    scanf("%d", &option);

    return option;
}