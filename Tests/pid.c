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
    pid_t parent;

    my_pid = getpid();
	parent = getppid();
    printf("%u\n", parent);
    printf("%u\n",my_pid);
    return (0);
}
