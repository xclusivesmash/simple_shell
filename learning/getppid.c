#include <stdio.h>
#include <unistd.h>

/**
* main - Entry Point.
* Return: always 0.
*/
int main()
{
    pid_t parentPID;

    parentPID = getppid();
    printf("%u\n", parentPID);
    return (0);	
}
