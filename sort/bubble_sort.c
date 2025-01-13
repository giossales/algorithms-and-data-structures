#include <stdio.h>
#include <stdbool.h>

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void bubble_sort(int *arr, int len)
{
    for (int i = 0; i < len - 1; i++)
    {
        bool swapped = false;
        for (int j = 0; j < len - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                // printf("Swapping %d and %d\n", arr[j], arr[j+1]);
                swap(&arr[j], &arr[j + 1]);
                swapped = true;
            }
        }

        if (!swapped)
        {
            break;
        }
    }
}

void show_arr(int *arr, int len)
{
    for (int i = 0; i < len; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main()
{
    int numbers[] = {23, 41, 25, 54, 18, 14};
    int len = sizeof(numbers) / sizeof(numbers[0]);
    bubble_sort(numbers, len);
    show_arr(numbers, len);
}