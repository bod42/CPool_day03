/*
** EPITECH PROJECT, 2017
** c code
** File description:
** pool
*/

#include <unistd.h>

void	my_putchar();

int	my_print_alpha()
{
	char	count = 'a';
	
	while (count <= 'z') {
		my_putchar(count);
		count++;
	}
	return (0);
}
