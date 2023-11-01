#include <stdio.h>
#include <stdlib.h>

#define SIZE 8

int queue[SIZE];

int quantity, head, tail;

void start();
void enqueue(char c);
int size();
char headValue();
char dequeue();
int empty();

void start()
{
    quantity = 0;
    head = 0;
    tail = 0;
}

void enqueue(char c)
{
    if (!full())
    {
        queue[tail] = c;
        tail++;
        quantity++;

        if (tail == SIZE)
        {
            tail = 0;
        }
    }
    else
    {
        printf("full queue");
    }
}

int size()
{
    return quantity;
}

char headValue()
{
    return queue[head];
}

char dequeue()
{
    char c;
    if (!empty())
    {
        c = queue[head];
        queue[head] = '\0';
        head++;
        quantity--;

        if (head == SIZE)
        {
            head = 0;
        }
        return c;
    }
    else
    {
        printf("Full queue");
    }
}

int empty()
{
    return quantity == 0;
}