int	main(int c, char **v)
{
	if (c == 2)
	{
		while (*v[1])
		{
			if (*v[1] == 'a')
			{
				write(1, "a", 1);
				break;
			}
			v[1]++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
