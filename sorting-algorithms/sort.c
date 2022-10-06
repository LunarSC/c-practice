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
            if (compare(&arr[i], &arr[j]))
            {
                swap(&arr[i], &arr[j]);
            }
        }
    }
}

int main()
{
    int arr[] = {10, 9, 8, 7, 6, 5, 4, 3, 2, 1};
    int len = sizeof(arr) / sizeof(*arr);
    printf("----------- UNSORTED ARRAY -----------\n");
    printArray(arr, len);
    selectionSort(arr, len);
    printf("----------- SORTED ARRAY -----------\n");
    printArray(arr, len);
}
