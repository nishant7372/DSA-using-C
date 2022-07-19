//*Stack Implementation using Singly Linked List*/

#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *link;
};

struct node *top = NULL;

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
    struct node *temp;
    temp = (struct node *)malloc(sizeof(struct node));
    printf("Enter the node data:");
    scanf("%d", &temp->data);
    temp->link = top;
    top = temp;
}

int pop()
{
    int element;
    if (isEmpty())
    {
        return 0;
    }
    else
    {
        struct node *temp;
        temp = top;
        element = temp->data;
        top = temp->link;
        temp->link = NULL;
        free(temp);
        return element;
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
        printf("Element %d is at the peek\n\n", top->data);
    }
}

int isEmpty()
{
    if (top == NULL)
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
        struct node *temp;
        temp = top;
        while (temp != NULL)
        {
            printf("%d\n", temp->data);
            temp = temp->link;
        }
    }
    printf("\n");
}
