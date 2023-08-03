#include "main.h" 

/**
 * print_binary - prints decimal as binary
 * @n: long integer
 */
void print_binary(unsigned long int n)
{
	int i;
	unsigned int k;
	int print_on = 0;

	if (!n)
	{
		putchar('0');
		return;
	}
	for (i = 63; i >= 0; --i)
	{
		k = n >> i;
		if (k & 1)
		{
			putchar('1');
			print_on = 1;
		}
		else if (!(k & 1) && print_on)
			putchar('0');
	}
}
