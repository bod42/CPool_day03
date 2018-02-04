/*
** EPITECH PROJECT, 2017
** c code
** File description:
** pool
*/

#include <unistd.h>

void	my_putchar();

int	my_print_digits()
{
	char	count = '0';
	
	while (count <= '9') {
		my_putchar(count);
		count++;
	}
	return (0);
}
