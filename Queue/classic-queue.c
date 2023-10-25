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
char denqueue(Queue *q);
int size(Queue *q);
char head(Queue *q);
int empty(Queue *q);

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

char denqueue(Queue *q)
{
    Element *e;
    char c;

    if (!empty(q))
    {
        e = q->head;
        c = e->value;

        q->head = e->next;
        if (empty(q))
        {
            q->tail = NULL;
        }
        q->size = q->size--;
        free(e);
        return c;
    }
    else
    {
        printf("Empty Queue");
        return '\0';
    }
}

int size(Queue *q)
{
    return q->size;
}

char head(Queue *q)
{
    return q->head->value;
}

int empty(Queue *q)
{
    return q->size == 0;
}
