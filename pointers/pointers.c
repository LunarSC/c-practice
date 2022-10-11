#include <stdio.h>

void printPointers(int arr[], int len)
{
    int *p = arr;
    for (int i = 0; i < len; i++)
    {
        printf("%i ", *(p++));
    }
}

int main()
{
    /*
    int x = 10;
    int y = 25;
    int *xptr = &x;
    int *yptr = &y;

    printf("%i == %i ?: %s\n", x, y, (x == y ? "ye" : "na"));
    printf("%p == %p ?: %s\n", xptr, yptr, (xptr == yptr ? "ye" : "na"));
    printf("%i == %i ?: %s\n", *xptr, *yptr, (*xptr == *yptr ? "ye" : "na"));

    */

    int arr[] = {1, 3, 5, 6};
    printPointers(arr, sizeof(arr) / sizeof(arr[0]));

    int *p = &arr[1];
    int *q = &arr[2];
    printf("\np: %p\nq: %p\np - q: %i\n", p, q, *(arr + (q - p)));
}
