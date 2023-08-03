#include "main.h" 
/**
 * print_binary - prints decimal as binary
 * @n: long integer
 */

void print_binary(unsigned long int n)
{
	signed long int size;
	char c;
	int flag;

	sized = sizeof(n) * 8 - 1;

	if (n == 0)
	{
		printf("0");
		return;
	}

	if (n == 1)
	{
		printf("1");
		return;
	}

	flag = 0;

	while (sized >= 0)
	{
		c = (n >> sized) & 1;

		if (flag == 1)
			putchar(c + '0');
		else
		{
			if (c == 1)
			{
				putchar(c + '0');
				flag = 1;
			}
		}

		sized -= 1;
	}
}
