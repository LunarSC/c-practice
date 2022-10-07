#include <stdio.h>


int main()
{
    int n = 100;
    size_t k = 0;

    FILE *evens, *odds;

    evens = fopen("evens.txt", "w");
    odds = fopen("odds.txt", "w");

    for (k = 0; k < n; k++)
    {
        (k % 2 == 0) ? fprintf(evens, "\t%5ld\n", k) :
                        fprintf(odds, "\t%5ld\n", k);
    }

    fclose(evens);
    fclose(odds);

    return 0;
}
