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

int *generatePrimes(int *limit)
{
    size_t INITSIZE = 1;
    int primes[INITSIZE];
    int ARRSIZE = sizeof(primes) / sizeof(int);
    for (int i = 0; i < *limit; i++)
    {
        printf("For loop generate primes - i = %d, limit = %d\n", i, *limit);
        if (i > (ARRSIZE - 1))
        {
            printf("Resizing primes array to size %d\n", i * ARRSIZE);
            int *tmp = (int*) realloc(primes, i * ARRSIZE);
            if (tmp)
            {
                *primes = *tmp;
                ARRSIZE = sizeof(primes) / sizeof(int);
            }

        }
        if (isPrime(*i))
        {
            primes[ARRSIZE] = i;
        }
    }

    for (int i = 0; i < ARRSIZE; i++)
    {
        printf("primes[%i] = %i\n", i, primes[i]);
    }
}

int main(int argc, char *argv[])
{
    if (argc != 2)
    {
        printf("No argument provided.");
        return 1;
    }

    //int input = atoi(argv[1]);

    //bool prime = isPrime(&input);
    //printf("%i is prime: %s\n", input, prime ? "true" : "false");
}

