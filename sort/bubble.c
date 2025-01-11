#include <stdio.h>
#include <stdbool.h>

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void bubble_sort(int *arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                //printf("Swapping %d and %d\n", arr[j], arr[j+1]);
                swap(&arr[j], &arr[j + 1]);
            }
        }
    }
}

void show_arr(int *arr, int n) {
    for(int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int array[] = {23, 41, 25, 54, 18, 14};
    bubble_sort(array, 6);
    show_arr(array, 6);
}