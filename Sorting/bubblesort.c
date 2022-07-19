/*Bubble Sorting*/

#include <stdio.h>
void bubblesort(int, int *arr);

void main()
{
    int arr[10], i, n;
    printf("Enter the number of elements to be inputted in array(between 1 to 10)\n");
    scanf("%d", &n);

    printf("Enter the elements:\n");

    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    bubblesort(n, arr);
}

void bubblesort(int n, int *arr)
{
    int i, j, temp;
    for (i = 0; i <= n - 1; i++)
    {
        for (j = 0; j <= n - 1 - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    printf("Sorted Array:\n");
    printf("[");
    for (i = 0; i < n; i++)
    {
        printf("%d, ", arr[i]);
    }
    printf("]");
}
