#include <stdio.h>
#include <stdlib.h>

typedef struct element
{
    char value;
    int priority;
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
void releaseQueue(Queue *queue);
int queueMenu();
void queueOption(Queue *queue, int option);

int main()
{
    Queue *queue = start();
    if (!queue)
    {
        printf("There's no available memory.\n");
        exit(1);
    }

    int option;
    do
    {
        option = queueMenu();
        queueOption(queue, option);
    } while (option);

    return 0;
}
Queue *start()
{
    Queue *q = malloc(sizeof(Queue));
    q->head = NULL;
    q->tail = NULL;
    q->size = 0;

    return q;
};

int queueMenu()
{
    int option;
    printf("\nChoose an option:\n");
    printf("[0] - Exit\n");
    printf("[1] - Print Queue Size\n");
    printf("[2] - Enqueue a character\n");
    printf("[3] - Dequeue a character\n");
    printf("[4] - Get head of the queue\n");
    printf("Type your option: ");
    scanf("%d", &option);

    return option;
}

void queueOption(Queue *queue, int option)
{
    char value;
    switch (option)
    {
    case 0:
        releaseQueue(queue);
        printf("Queue released.\n");
        break;

    case 1:
        printf("Enter a char to enqueue:");
        scanf("%c", &value);
        enqueue(queue, value);
        break;

    case 2:
        printf("Queue size: %d\n", size(queue));
        break;

    case 3:
        value = denqueue(queue);
        if (value != '\0')
        {
            printf("Dequeued character: %c\n", value);
        }
        break;

    case 4:
        if (!empty(queue))
        {
            printf("Head of the queue: %c\n", head(queue));
        }
        else
        {
            printf("Queue is empty.\n");
        }
        break;
    default:
        printf("Invalid Command/n");

        break;
    }
}

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
    if (empty(q))
    {
        printf("Empty Queue\n");
        return '\0';
    }

    Element *current = q->head;
    Element *previous = NULL;
    Element *highestPriorityElement = current;
    Element *beforeHighestPriorityElement = NULL;

    // Find the element with the highest priority
    while (current != NULL)
    {
        if (current->priority < highestPriorityElement->priority)
        {
            highestPriorityElement = current;
            beforeHighestPriorityElement = previous;
        }
        previous = current;
        current = current->next;
    }

    char value = highestPriorityElement->value;

    // Remove the element from the queue
    if (beforeHighestPriorityElement == NULL) // Element is at the head
    {
        q->head = highestPriorityElement->next;
        if (q->head == NULL) // Queue becomes empty
        {
            q->tail = NULL;
        }
    }
    else
    {
        beforeHighestPriorityElement->next = highestPriorityElement->next;
        if (beforeHighestPriorityElement->next == NULL) // Element is at the tail
        {
            q->tail = beforeHighestPriorityElement;
        }
    }

    free(highestPriorityElement);
    q->size--;

    return value;
}

void releaseQueue(Queue *queue)
{
    Element *current, *next;
    current = queue->head;
    while (current != NULL)
    {
        next = current->next;
        free(current);
        current = next;
    }
    free(queue);
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
