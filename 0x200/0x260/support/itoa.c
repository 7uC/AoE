#include "itoa_atoi.h"

#define IS_POS(x) (x < 0 ? 0 : 1)

char	*itoa(int num)
{
	int x;
	int place;
	int digits;
	char *numstr;
	char *numstr_p;

	place = 1;
	digits = 1;
	if (!IS_POS(num))
	{
		num *= -1;
		digits++;
		x = 1;
	}
	while (num / place > 9)
	{
		digits++;
		place *= 10;
	}
	numstr = malloc(digits * sizeof(char) + 1);
	numstr_p = numstr;
	if (num == 0)
		*numstr = '0';
	if (x == 1)
	{
		*numstr = '-';
		numstr++;
	}
	while (num > 0)
	{
		x = num / place;
		num -= x * place;
		place /= 10;
		*numstr = x + 48;
		numstr++;
	}
	numstr = '\0';
	return (numstr_p);
}
