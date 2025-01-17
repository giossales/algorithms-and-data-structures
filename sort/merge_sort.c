#include <stdio.h>

void show_arr(int *arr, int len)
{
    for (int i = 0; i < len; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void merge(int arr[], int low, int mid, int high)
{
    int i = low, j = mid + 1, k = 0;
    int temp[high - low + 1];

    while (i <= mid && j <= high)
    {
        if (arr[i] <= arr[j])
        {
            temp[k] = arr[i];
            i++;
        }
        else
        {
            temp[k] = arr[j];
            j++;
        }

        k++;
    }

    while (i <= mid)
    {
        temp[k] = arr[i];
        i++;
        k++;
    }

    while (j <= high)
    {
        temp[k] = arr[j];
        j++;
        k++;
    }

    for (int l = 0; l < k; l++)
    {
        arr[l + low] = temp[l];
    }
}

void merge_sort(int arr[], int low, int high)
{
    if (low < high)
    {
        int mid = (low + high) / 2;

        merge_sort(arr, low, mid);
        merge_sort(arr, mid + 1, high);

        merge(arr, low, mid, high);
    }
}



int main()
{
    int numbers[] = {23, 41, 25, 54, 18, 14};
    int len = sizeof(numbers) / sizeof(numbers[0]);

    merge_sort(numbers, 0, len - 1);
    show_arr(numbers, len);
}