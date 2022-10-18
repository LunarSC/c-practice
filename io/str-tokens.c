#include <stdio.h>
#include <string.h>

int main()
{
    char src[] = "Poggers, amogus,, sus?";
    const char delimiters[] = ", ?";
    char *token = strtok(src, delimiters);
    int toknum = 0;
    while (token != NULL)
    {
        printf("%d: \"%s\"\n", ++toknum, token);
        token = strtok(NULL, delimiters);
    }
}
