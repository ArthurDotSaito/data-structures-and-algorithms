#include <stdio.h>
#include <stdlib.h>

#define SIZE 8

int queue[SIZE];

int quantity, head, tail;

void start();
void enqueue(char c);
int size();
char headValue();

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
        else
        {
            printf("full queue");
        }
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