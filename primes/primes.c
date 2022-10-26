#include <stdio.h>
#include <stdbool.h>
#include <errno.h>
#include <limits.h>
#include <stdlib.h>

bool isPrime(int *x)
{
    if (*x ==0 || *x == 1 || *x < 0)
    {
        return false;
    }
    for (int i = 2; i <= *x / 2; i++)
    {
        if ((*x % i) == 0)
        {
            printf("%i is divisible by %i and %i\n", *x, i, *x / i);
            return false;
        }
    }
    return true;
}

int main(int argc, char *argv[])
{
    if (argc != 2)
    {
        printf("No argument provided.");
        return 1;
    }
    char *param;
    int x;

    errno = 0;

    long conv = strtol(argv[1], &param, 10);
    if (errno != 0 || *param != '\0' || conv > INT_MAX || conv < INT_MIN) {
        printf("Couldn't convert arg to int!\n");
        return 1;
    } else {
        x = conv;
    }

    bool prime = isPrime(&x);
    printf("%i is prime: %s\n", x, prime ? "true" : "false");
}
