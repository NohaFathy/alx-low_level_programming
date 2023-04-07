#include "main.h"
#include <stdio.h>
#include <unistd.h>
#include <limits.h>
/**
 * print_binary - Prints the binary representation of an unsigned int
 *
 * @n: The number to convert to binary
 *
 * Return: void
 */
void print_binary(unsigned long int n)
{
	unsigned long int bit;

	for (bit = 1ul << 63; bit > 0; bit >>= 1)
	{
		if (n & bit)
			printf("1");
		else
			printf("0");
	}
}

