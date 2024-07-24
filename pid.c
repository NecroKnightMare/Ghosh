#include "ghost.h"
#include <unistd.h>
#include <stdio.h>
/**
 *getpid - retrieves process id
 *@: no parameters
 *Return: void
**/
pid_t getpid(void)
{
	pid_t Major;

	Major = getpid();

	printf("%u\n", Major);
	return (0);
}
