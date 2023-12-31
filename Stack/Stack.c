#include <stdio.h>
#include <stdlib.h>

typedef struct element
{
    char value;
    struct element *next;
} Element;

typedef struct Stack
{
    Element *top;
    int size;
} Stack;

void push(Stack *s, char c);
char top(Stack *s);
int size(Stack *s);
int isEmpty(Stack *s);
char pop(Stack *s);

Stack *start()
{
    Stack *s = malloc(sizeof(Stack));
    s->top = NULL;
    s->size = 0;
}

void push(Stack *s, char c)
{
    Element *e = malloc(sizeof(Element));
    e->value = c;
    e->next = s->top;
    s->top = e;

    s->size = s->size++;
}

char top(Stack *s)
{
    if (empty(s))
    {
        printf("Empty Stack");
        return 0;
    }

    return s->top->value;
}

int size(Stack *s)
{
    return s->size;
}

int isEmpty(Stack *s)
{
    return s->size == 0;
}

char pop(Stack *s)
{
    Element *e;
    char c;

    if (!isEmpty(s))
    {
        e = s->top;
        c = e->value;
        s->top = s->top->next;

        s->size = s->size--;

        free(e);
        e = NULL;
        return c;
    }
    else
    {
        printf("Stack is empty");
        return '/0';
    }
}