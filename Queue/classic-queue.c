#include <stdio.h>
#include <stdlib.h>

typedef struct element
{
    char value;
    struct element *next;
} Element;

typedef struct queue
{
    Element *head;
    Element *tail;
    int size;
} Queue;

Queue *start()
{
    Queue *q = malloc(sizeof(Queue));
    q->head = NULL;
    q->tail = NULL;
    q->size = 0;

    return q;
};