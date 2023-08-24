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
