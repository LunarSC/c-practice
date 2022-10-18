#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
    if (argc > 1)
    {
        char *numString = argv[1];
        int num = atoi(numString);
        if (num % 2 == 0)
        {
            printf("%i is an even number :D", num);
        }
        else
        {
            printf("%i is an odd number D:", num);
        }
    }
}
