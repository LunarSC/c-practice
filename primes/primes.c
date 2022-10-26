#include <stdio.h>
#include <stdbool.h>
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

    int input = atoi(argv[1]);

    bool prime = isPrime(&input);
    printf("%i is prime: %s\n", input, prime ? "true" : "false");
}
