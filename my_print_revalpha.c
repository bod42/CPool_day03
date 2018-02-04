/*
** EPITECH PROJECT, 2017
** c code 
** File description:
** pool
*/

#include <unistd.h>

void	my_putchar();

int	my_print_revalpha()
{
	int	count = 'z';
	
	while (count >= 'a') {
		my_putchar(count);
		count--;
	}
	return (0);
}
