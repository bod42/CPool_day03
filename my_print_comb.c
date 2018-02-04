/*
** EPITECH PROJECT, 2017
** c code
** File description:
** pool
*/

#include <unistd.h>

void	my_putchar();

void	print_numberse(char number1, char number2, char number3)
{
	if (number1 == '7' && number2 == '8' && number3 == '9') {
		my_putchar(number1);
		my_putchar(number2);
		my_putchar(number3);
	} else {
		my_putchar(number1);
		my_putchar(number2);
		my_putchar(number3);
		my_putchar(',');
		my_putchar(' ');
	}
}

int	my_print_comb()
{
	char	number3;
	char	number2;
	char	number1 = '0';
	
	while (number1 <= '7') {
		number2 = number1 + 1;
		while (number2 <= '8') {
			number3 = number2 + 1;
			while  (number3 <= '9') {
				print_numberse(number1, number2, number3);
				number3++;
			}
			number2++;
		}
		number1++;
	}
	return (0);
}
