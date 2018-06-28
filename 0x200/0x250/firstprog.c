#include <unistd.h>

void	printstr(char *str)
{
	while (*str)
	{
		write(1, str, 1);
		str++;
	}
}

int	main(void)
{
	int i;

	i = 0;
	while (i++ < 10)
		printstr("Hello World!\n");
	return (0);
}
