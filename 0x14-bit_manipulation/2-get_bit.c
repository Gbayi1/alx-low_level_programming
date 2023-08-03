/**
 * get_bit - gets bit value at an index
 * @n: integer to get bit value from
 * @index: index of n to get bit from
 *
 * Return: bit at index
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int sized;

	sized = sizeof(n) * 8 - 1;

	if (index > sized)
		return (-1);

	return ((n >> index) & 1);

}
