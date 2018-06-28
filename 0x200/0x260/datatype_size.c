char	*itoa(int num);
void	printstr(char *str);

int	main(void)
{
	printstr("The 'int' data type is \t\t\t");
	printstr(itoa(sizeof(int)));
	printstr("\n");
	printstr("The 'unsigned int' data type is \t");
        printstr(itoa(sizeof(unsigned int)));
        printstr("\n");
	printstr("The 'short int' data type is \t\t");
        printstr(itoa(sizeof(short int)));
        printstr("\n");
	printstr("The 'long int' data type is \t\t");
        printstr(itoa(sizeof(long int)));
        printstr("\n");
	printstr("The 'long long int' data type is \t");
        printstr(itoa(sizeof(long long int)));
        printstr("\n");
	printstr("The 'float' data type is \t\t");
        printstr(itoa(sizeof(float)));
        printstr("\n");
	printstr("The 'char' data type is \t\t");
        printstr(itoa(sizeof(char)));
        printstr("\n");
	return (0);
}
