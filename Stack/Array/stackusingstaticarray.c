/*Stack Implementation using Static Array*/

#include <stdio.h>
#define CAPACITY 5

int stack[CAPACITY];
int top = -1;

void push();
int pop();
int isFull();
int isEmpty();
int peek();
void traverse();

void main()
{
    int ch, element;
    while (1)
    {
        printf("1. Push an element\n");
        printf("2. Pop an element\n");
        printf("3. Peek\n");
        printf("4. Traverse the Stack\n");
        printf("5. Quit\n\n");

        printf("Enter your choice: ");
        scanf("%d", &ch);

        switch (ch)
        {
        case 1:
            push();
            break;
        case 2:
            element = pop();
            if (element == 0)
            {
                printf("Stack is empty\n\n");
            }
            else
            {
                printf("Element %d is popped out \n\n", element);
            }
            break;
        case 3:
            peek();
            break;
        case 4:
            traverse();
            break;
        case 5:
            exit(0);
            break;
        default:
            printf("Invalid choice\n\n");
            break;
        }
    }
}

void push()
{
    int ele;
    if (isFull())
    {
        printf("Stack is Full\n\n");
    }
    else
    {
        printf("Enter the element");
        scanf("%d", &ele);
        top++;
        stack[top] = ele;
        printf("%d is inserted\n\n", ele);
    }
}

int pop()
{
    if (isEmpty())
    {
        return 0;
    }
    else
    {
        return stack[top--];
    }
}

int peek()
{
    int ele;
    if (isEmpty())
    {
        printf("Stack is Empty\n\n");
    }
    else
    {
        printf("Element %d is at the peek\n\n", stack[top]);
    }
}

int isFull()
{
    if (top == CAPACITY-1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int isEmpty()
{
    if (top == -1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

void traverse()
{
    if (isEmpty())
    {
        printf("No element in the stack\n\n");
    }
    else
    {
        for (int i = top; i>=0; i--)
        {
            printf("%d\n", stack[i]);
        }
    }
    printf("\n");
}
