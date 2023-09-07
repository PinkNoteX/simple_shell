#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <unistd.h>
/**
 * main - PID
 *
 * Return: Always 0.
 */
int main(void)
{
    pid_t my_pid;
    pid_t parent_pid;

    my_pid = getpid();

    printf("%u\n", my_pid);
    parent_pid = getppid();
    printf("%u\n", parent_pid);
    return (0);
}
