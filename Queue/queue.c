/*Queue Implementation using static Array*/

#include <stdio.h>
#define CAPACITY 5

int queue[CAPACITY];
int front = 0;
int rear = 0;

void insert();
void delete ();
void traverse();

void main()
{
    int ch;
    while(1)
    {
        printf("1. Insert an element\n");
        printf("2. Delete an element\n");
        printf("3. Traverse the Queue\n");
        printf("4. Quit\n\n");

        printf("Enter your choice: ");
        scanf("%d", &ch);

        switch (ch)
        {
        case 1:
            insert();
            break;
        case 2:
            delete ();
            break;
        case 3:
            traverse();
            break;
        case 4:
            exit(0);
            break;
        default:
            printf("Invalid Choice\n\n");
        }
    }
}

void insert()
{
    if (rear == CAPACITY)
    {
        printf("Queue is Full\n\n");
    }
    else
    {
        int element;
        printf("Enter the element:");
        scanf("%d", &element);
        queue[rear] = element;
        rear++;
        printf("%d is inserted\n\n", element);
    }
}

void delete ()
{
    if (front == rear)
    {
        printf("Queue is Empty\n");
    }
    else
    {
        int i;
        printf("Deleted: %d\n\n", queue[front]);
        for (i = 0; i < rear - 1; i++)
        {
            queue[i] = queue[i + 1];
        }
        rear--;
    }
}

void traverse()
{
    if (front == rear)
    {
        printf("Queue is Empty\n\n");
    }
    else
    {
        int i;
        printf("Queue Elements:");
        for (i = front; i < rear; i++)
        {
            printf("%d, ", queue[i]);
        }
        printf("\n\n");
    }
}
