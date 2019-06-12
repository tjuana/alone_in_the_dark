#include <unistd.h>
int brackets(char *str, char c)
{
	if (*str == c)
		return (1);
	else if (!*str || *str == ')' ||)
}
int	main(int c, char **v)
{
	int	i;

	i = 0;
	if (c > 1)
		while (++i < c)
			brackets(v[1], 0) ? write(1, "OK\n", 3) : write(1, "error\n", 6);
	else
		write(1, "\n", 1);
	return (0);
}
