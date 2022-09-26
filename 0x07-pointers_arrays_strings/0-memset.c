#include "main.h"

/**
* _memset - fills a memory block with a constant byte
* 0s: addressnto memory block
* 0b: char to be used
* 0n: number of bytes to be used
*
* Return: pointer to the memory block
*/

char *_memset(char b, unsigned int n)
{
	while (n)
	{
		s[n - 1] = b;
		n--;
	}
	return (s);
}
