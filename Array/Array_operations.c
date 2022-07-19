#include <stdio.h>
#include <stdlib.h>
#define CAPACITY 10

int a[CAPACITY];
int len;
int c = 0, c1 = 0;
int size;

int create(void);
void addatbegin(void);
void insertatloc(void);
int length(void);
void display(void);
void delete (void);
void revarray(void);

void main()
{
    int ch;
    while (1)
    {
        printf("One Dimensional Array Operations: \n");
        printf("1. Create a New Array\n");
        printf("2. Add at beginning\n");
        printf("3. Insert\n");
        printf("4. Length\n");
        printf("5. Display\n");
        printf("6. Delete\n");
        printf("7. Reverse Array\n");
        printf("8. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &ch);

        switch (ch)
        {

        case 1:
            create();
            printf("Array after creation:\n");
            display();
            break;
        case 2:
            addatbegin();
            printf("Array after insertion at beginning:\n");
            display();
            break;
        case 3:
            insertatloc();
            printf("Array after insertion:\n");
            display();
            break;
        case 4:
            len = length();
            printf("Length:%d\n\n", len);
            break;
        case 5:
            printf("Array:\n");
            display();
            break;
        case 6:
            delete ();
            printf("Array after deletion:\n");
            display();
            break;
        case 7:
            revarray();
            printf("Array after Reversing:\n");
            display();
            break;
        case 8:
            exit(0);
            break;
        default:
            printf("Invalid Choice");
        }
    }
}

int create()
{
    int i;
    printf("Enter the Size of the array: ");
    scanf("%d", &size);
    printf("Enter the Elements in the array:\n");
    for (i = 0; i < size; i++)
        scanf("%d", &a[i]);
}

void addatbegin()
{
    int i, element;
    int len = length();
    if (len == CAPACITY)
    {
        printf("Array is Full\n");
    }
    else
    {
        printf("Enter the element:");
        scanf("%d", &element);
        for (i = size + c - c1; i > 0; i--)
        {
            a[i] = a[i - 1];
        }
        a[0] = element;
        c++;
    }
}

void insertatloc()
{
    len = length();
    if (len == CAPACITY)
    {
        printf("Array is Full\n");
    }
    else
    {
        int i, loc, index;
        printf("Enter Location at which u want to insert element: \n");
        scanf("%d", &loc);

        if (loc > len + 1)
        {
            printf("Invalid Location \n");
        }
        else
        {
            int element;
            index = loc - 1;
            printf("Enter the element:");
            scanf("%d", &element);
            for (i = size + c - c1; i > index; i--)
            {
                a[i] = a[i - 1];
            }
            a[index] = element;
            c++;
        }
    }
}

int length()
{

    int i, count = 0;

    for (i = 0; i < size + c - c1; i++)
    {
        count++;
    }
    return count;
}

void display()
{

    int i;
    for (i = 0; i < size + c - c1; i++)
    {
        printf("%d\n", a[i]);
    }
    printf("\n");
}

void delete ()
{
    len = length();
    if (len == 0)
    {
        printf("Array is Empty\n");
    }
    else
    {
        int i, element, index;
        printf("Enter the element to delete:");
        scanf("%d", &element);

        for (i = 0; i < size + c - c1; i++)
        {
            if (a[i] == element)
                index = i;
        }
        for (i = index; i < size + c - c1; i++)
        {
            a[i] = a[i + 1];
        }
        c1++;
    }
}

void revarray()
{
    len = length();
    int i = 0, j = len - 1, temp;
    while (i < j)
    {
        temp = a[i];
        a[i] = a[j];
        a[j] = temp;
        i++;
        j--;
    }
}
