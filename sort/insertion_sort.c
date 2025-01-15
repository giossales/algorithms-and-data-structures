#include <stdio.h>

void insertion_sort(int *arr, int len)
{
    for (int i = 1; i < len; i++)
    {
        int val = arr[i];
        int j = i - 1;

        while (j >= 0 && arr[j] > val)
        {
            if (arr[j] > val)
            {
                arr[j + 1] = arr[j];
            }

            j--;
        }

        arr[j + 1] = val;
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
    
    insertion_sort(numbers, len);
    show_arr(numbers, len);
}