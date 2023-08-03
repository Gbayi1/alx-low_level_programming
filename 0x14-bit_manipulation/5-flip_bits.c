/**
 * flip_bits - gets the number of bits flipped form n to m
 * @n: initial lu int
 * @m: secondary lu int
 *
 * Return: number of bits need to flip to get from `n to `m`
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int sized;
	unsigned long int flipped;
	unsigned long int i;

	sized = sizeof(n) * 8 - 1;

	flipped = 0;
	i = 0;

	while (i <= sized)
	{
		if ((n & 1) != (m & 1))
			flipped++;

		n = n >> 1;
		m = m >> 1;

		i++;
	}

	return (flipped);

}
