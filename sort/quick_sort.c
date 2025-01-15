#include <stdio.h>

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void show_arr(int *arr, int len)
{
    for (int i = 0; i < len; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int partition(int *arr, int low, int high)
{
    int pivot = arr[(low + high) / 2], i = low, j = high;

    while (i <= j)
    {
        while (arr[i] < pivot)
        {
            i++;
        }

        while (arr[j] > pivot)
        {
            j--;
        }

        if (i <= j)
        {
            swap(&arr[i], &arr[j]);
            i++;
            j--;
        }
    }

    return i;
}

void quick_sort(int *arr, int low, int high)
{
    if (low < high)
    {
        int mid = partition(arr, low, high);

        quick_sort(arr, low, mid - 1);
        quick_sort(arr, mid, high);
    }
}

int main()
{
    int numbers[] = {23, 41, 25, 54, 18, 14};
    int len = sizeof(numbers) / sizeof(numbers[0]);

    quick_sort(numbers, 0, len - 1);
    show_arr(numbers, len);
}