#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point.
 * Return: always 0 on success.
 */
int main(void)
{
    char *linePointer = NULL;
    size_t n = 0;
    ssize_t buffSize;

    printf("$ ");
    /* get user input */
    buffSize = getline(&linePointer, &n, stdin);
    if (buffSize == EOF || buffSize == -1)
    {
        printf("\n");
        return (-1);
    }
    printf("%s", linePointer);
    free(linePointer);
    return (0);
}
