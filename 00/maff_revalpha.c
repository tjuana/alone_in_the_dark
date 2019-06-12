#include <unistd.h>
int big(int c)
{
	c -= 32;
	return (c);
}
int	main()
{
	int c;
	int b;

	c = 122;
	while (c >= 97)
	{
		if (c % 2 > 0)
		{
			b = big(c);
			write(1, &b, 1);
		}
		else
			write(1, &c, 1);
		c--;
	}
	write(1, "\n", 1);
	return (0);
}
