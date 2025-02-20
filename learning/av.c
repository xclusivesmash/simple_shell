#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry Point.
 * @argc: argument count.
 * @argv: argument vector.
 * Return: always 0.
 */
int main(int argc, char **argv)
{
    (void) argc;
    int i;

    /* prints args to STDOUT */
    i = 1;
    while (argv[i] != NULL)
    {
        printf("%s\n", argv[i]);
        i = i + 1;
    }
    return (0);
}
