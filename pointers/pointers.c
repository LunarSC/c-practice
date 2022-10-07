#include <stdio.h>

int main()
{
    int x = 10;
    int y = 25;
    int *xptr = &x;
    int *yptr = &y;

    printf("%i == %i ?: %s\n", x, y, (x == y ? "ye" : "na"));
    printf("%p == %p ?: %s\n", xptr, yptr, (xptr == yptr ? "ye" : "na"));
    printf("%i == %i ?: %s\n", *xptr, *yptr, (*xptr == *yptr ? "ye" : "na"));
}
