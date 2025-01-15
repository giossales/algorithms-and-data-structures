#include <stdio.h>

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void selection_sort(int *arr, int len)
{
    for (int i = 0; i < len - 1; i++)
    {
        int menor = i;

        for (int j = i + 1; j < len; j++)
        {
            if (arr[j] < arr[menor])
            {
                menor = j;
            }
        }

        if (menor != i)
        {
            swap(&arr[menor], &arr[i]);
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
    
    selection_sort(numbers, len);
    show_arr(numbers, len);
}