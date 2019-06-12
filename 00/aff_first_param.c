int	main(int c, char **v)
{
	if (c > 1)
	{
		while (*v[c - 1])
			write(1, v[c - 1]++, 1);
	}
	write(1, "\n", 1);
	return (0);
}
