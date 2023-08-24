#include <stdio.h>
#include <stdlib.h>

struct node
{
    int value;
    struct node *next;
    struct node *prev;
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

void push(node *linkedList)
{
    // Space for a newNode
    node *newNode = (node *)malloc(sizeof(node));

    // Verify if there is memory to a newNode
    if (!newNode)
    {
        printf("There's no available memory.\n");
        exit(1);
    }
    printf("value to push: ");
    scanf("%d", &newNode->value);

    // Check if it's the list is empty. if is empty, so there's no next Node.
    if (isEmpty(linkedList))
    {
        linkedList->next = newNode;
        newNode->next = NULL;
        newNode->prev = linkedList;
    }
    else
    {
        // If it's not empty, is necessary update the pointers to correct nodes.
        node *oldHead = linkedList->next;

        linkedList->next = newNode;
        newNode->next = oldHead;
        newNode->prev = linkedList;
        oldHead->prev = newNode;
    }
}