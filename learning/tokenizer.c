#include <stdio.h>
#include <stdlib.h>

/*
 * main - tokenizes a string.
 * @str: input string.
 * Return: array of tokens if any.
 */
int main(void)
{
    int nwords = 0, i;
    char *str = "Hello  my beautiful\tshell";
    for (i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == ' ' && str[i + 1] != ' ')
            nwords = nwords + 1;
    }
    printf("words: %d\n", nwords + 1);
    return (0);
}
