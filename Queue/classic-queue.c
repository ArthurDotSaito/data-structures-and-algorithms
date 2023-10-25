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

void enqueue(Queue *q, char c);

Queue *start()
{
    Queue *q = malloc(sizeof(Queue));
    q->head = NULL;
    q->tail = NULL;
    q->size = 0;

    return q;
};

void enqueue(Queue *q, char c)
{
    Element *e = malloc(sizeof(Element));
    e->value = c;
    e->next = NULL;

    if (q->tail != NULL)
    {
        q->tail->next = e;
    }
    else
    {
        q->head = e;
    }

    q->tail = e;
    q->size = q->size++;
}