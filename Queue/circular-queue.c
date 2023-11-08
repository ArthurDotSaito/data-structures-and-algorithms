#include <stdio.h>
#include <stdlib.h>

#define SIZE 8

int queue[SIZE];

int quantity, head, tail;

void start();
int menu();
void enqueue(char c);
int size();
char headValue();
char dequeue();
void printQueue();
int empty();

int main()
{
    char c;
    start();

    int option;
    do
    {
        option = menu();

        switch (option)
        {
        case 1:
            printf("Enter a character to enqueue: ");
            scanf(" %c", &c);
            enqueue(c);
            break;
        case 2:
            c = dequeue();
            if (c != '\0')
            {
                printf("Dequeued character: %c\n", c);
            }
            break;
        case 3:
            printQueue();
            break;
        case 4:
            printf("Queue size is: %d\n", size());
            break;
        case 5:
            c = headValue();
            if (c != '\0')
            {
                printf("Head value is: %c\n", c);
            }
            break;
        case 0:
            printf("Exiting...\n");
            break;
        default:
            printf("Invalid choice, please try again.\n");
        }
    } while (option != 0);

    return 0;
}

void start()
{
    quantity = 0;
    head = 0;
    tail = 0;
}

int menu()
{
    int choice;

    printf("\nQueue Menu:\n");
    printf("1. Enqueue\n");
    printf("2. Dequeue\n");
    printf("3. Print Queue\n");
    printf("4. Get Queue Size\n");
    printf("5. Get Head Value\n");
    printf("0. Exit\n");
    printf("Enter your choice: ");
    scanf(" %d", &choice);

    return choice;
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

void printQueue()
{
    printf("Queue: ");
    for (int i = 0, index = head; i < quantity; i++, index = (index + 1) % SIZE)
    {
        printf("%c ", queue[index]);
    }
    printf("\n");
}

int empty()
{
    return quantity == 0;
}

int full()
{
    return quantity == SIZE;
}