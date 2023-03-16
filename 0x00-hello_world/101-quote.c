#include <stdio.h>
#include <unistd.h>

/**
 * main - the function that holds the sorce code
 *
 * Return: 0 as success but returns 1 here
 */

int main(void)
{
	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
	return (1);
}
