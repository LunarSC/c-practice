#include <stdio.h>
#include <string.h>

int main(int argc, char **argv)
{
    if (argc != 2)
    {
        puts("No 2nd parameter!");
        return 1;
    }
    else
    {
        printf("String size: %zu\n", n);
        size_t n = strlen(argv[1]);
        for (int i = 0; i < n; i++)
        {
            printf("%c\n", (argv[1]) + i);
        }
    }
}
