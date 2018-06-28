#include <unistd.h>

int	str_len(char *str)
{
	int count;

	count = 0;
	while (*str++)
		count++;
	return (count);
}

void	strcopy(char *copy, char *str, int n)
{
	int strlen;

	strlen = str_len(str);

	while (strlen > 0 && n > 0)
	{
		*copy = *str;
		copy++;
		str++;
		n--;
		strlen--;
	}
	if (n > 0)
		*copy = '\0';
}

void	printstr(char *str)
{
	while (*str)
	{
		write(1, str, 1);
		str++;
	}
}

int	main(int argc, char **argv)
{
	if (argc < 2)
		return (0);
	char buffer[20];

	argv++;
	strcopy(buffer, *argv, 20);
	printstr(buffer);
	printstr("\n");
	return (0);
}
