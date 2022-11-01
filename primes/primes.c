#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

//Prints a given array
void printArray(int arr[], int len)
{
    for (int i = 0; i < len; i++)
    {
        printf("primes[%i] = %i\n", i, arr[i]);
    }
    printf("\n");
}

bool isPrime(int *x)
{
    if (*x ==0 || *x == 1 || *x < 0)
    {
        printf("0 and 1 are not primes.\n");
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
    printf("%d is prime!\n", *x);
    return true;
}

int *generatePrimes(int *limit)
{
    int *primes = malloc(sizeof(int));
    int ARRPOS = 0;
    for (int i = 0; i <= *limit; i++)
    {
        printf("For loop generate primes - i = %d, limit = %d, ARRPOS = %d\n", i, *limit, ARRPOS);
        if (isPrime(&i))
        {
            //Reallocate memory, add another slot to the array
            printf("Resizing primes array to size %d\n", ARRPOS + (sizeof *primes));
            int *tmp;
            tmp = realloc(primes, (ARRPOS + 1) * (sizeof *primes));
            if (tmp)
            {
                if (i != 2)
                {
                    primes = tmp;
                }
            }
            else
            {
                printf("----- REALLOC FAILED -----");
                exit(1);
            }
            //Put the new prime in the array
            printf("primes[%i] = %i\n", ARRPOS, i);
            primes[ARRPOS] = i;
            ARRPOS++;
        }
    }

    printf("------- Prime Array -------\n");
    printArray(primes, ARRPOS);
    return primes;
}

int main(int argc, char *argv[])
{
    if (argc != 2)
    {
        printf("No argument provided.");
        return 1;
    }

    int input = atoi(argv[1]);

    //bool prime = isPrime(&input);
    //printf("%i is prime: %s\n", input, prime ? "true" : "false");

    int *primes = generatePrimes(&input);
}

