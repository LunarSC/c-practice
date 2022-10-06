#include <stdio.h>

//Returns negative integer if b > a
int compare (int *a, int *b)
{
    return *a - *b;
}

//Swaps 2 integers address values
void swap(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

//Prints a given array
void printArray(int arr[], int len)
{
    for (int i = 0; i < len; i++)
    {
        printf("%i ", arr[i]);
    }
    printf("\n");
}

//O(n^2) complexity, a pretty badly optimized sort
void selectionSort(int arr[], int len)
{
    for (int i = 0; i < len; i++)
    {
        int temp = 0;
        for (int j = i + 1; j < len; j++)
        {
            if (compare(&arr[i], &arr[j]) > 0)
            {
                swap(&arr[i], &arr[j]);
            }
        }
    }
}

//O(2^n)
void bubbleSort(int arr[], int len)
{
    if (len == 1)
    {
        return;
    }

    for (int i = 0; i < len - 1; i++)
    {
        if (compare(&arr[i], &arr[i + 1]) > 0)
        {
            swap(&arr[i], &arr[i + 1]);
        }
    }
    bubbleSort(arr, len - 1);
}

void insertionSort(int arr[], int len)
{
    for (int i = 1; i < len; i++)
    {
        int key = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j -= 1;
        }
        arr[j + 1] = key;
    }
}

void mergeSort(int arr[], int len)
{

}

int main()
{
    int arr[] = {10, 9, 8, 7, 6, 5, 4, 3, 2, 1};
    int len = sizeof(arr) / sizeof(*arr);

    printf("----------- UNSORTED ARRAY -----------\n");
    printArray(arr, len);
    //selectionSort(arr, len);
    //bubbleSort(arr, len);
    //insertionSort(arr, len);
    //mergeSort(arr, len);

    printf("----------- SORTED ARRAY -----------\n");
    printArray(arr, len);

}
