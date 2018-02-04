/*
** EPITECH PROJECT, 2017
** c code
** File description:
** pool
*/

#include <unistd.h>

void	my_putchar(char c);

void	print_numberse2(char number1, char number2, char number3, char number4)
{
	if ( number1 == '9' && number2 == '8'
	     && number3 == '9' && number4 == '9') {
		my_putchar(number1);
		my_putchar(number2);
		my_putchar(' ');
		my_putchar(number3);
		my_putchar(number4);
	} else {
		my_putchar(number1);
		my_putchar(number2);
		my_putchar(' ');
		my_putchar(number3);
		my_putchar(number4);
		my_putchar(',');
		my_putchar(' ');
	}
}

void	while4(char number1, char number2, char number3, char number4)
{
	while (number4 <= '9') {
		print_numberse2(number1, number2, number3, number4);
		number4++;
	}
}

int	my_print_comb2()
{
	char	number1 = '0';
	char	number2;
	char	number3;
	char	number4;
	
	while (number1 <= '9') {
		number2 = '0';
		while (number2 < '9') {
			number3 = '0';
			while (number3 <= '9') {
				number4 = '1';
				while4(number1, number2, number3, number4);
				number3++;
			}
			number2++;
		}
		number1++;
	}
	return (0);
}
