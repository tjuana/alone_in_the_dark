int	repeat(char c)
{
	int r = 0;
	if (c >= 'A' && c <= 'Z')
		r = c - 'A' + 1;
	if (c >= 'a' && c <= 'z')
		r = c - 'a' + 1;
	else
		r = 1;
	return (r);
}

int	main(int c, char **v)
{
	int rep = 0;

	if (c == 2)
	{
		while (*v[1])
		{	
			rep = repeat(*v[1]);
				while(rep--)
					write(1, v[1], 1);
			v[1]++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
