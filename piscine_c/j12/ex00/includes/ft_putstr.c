#include "ft.h"

void ft_putstr( char *str)
{
	int index;
	index = 0;
	while (str[index] != '\0'){
		ft_putchar(str[index]);
		index++;
	}
}