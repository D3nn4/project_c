#include <unistd.h>
#include "../ft_putchar.c"
#include "../ft_putnbr.c"


void	ft_ultimate_ft(int *********nbr)
{
	*********nbr = 42;
}




int		main ()
{
	int nb;
	int *ptr;
	int **ptr1;
	int ***ptr2;
	int ****ptr3;
	int *****ptr4;
	int ******ptr5;
	int *******ptr6;
	int ********ptr7;
	int *********ptr8;
	

	ptr = &nb;
	ptr1 = &ptr;
	ptr2 = &ptr1;
	ptr3 = &ptr2;
	ptr4 = &ptr3;
	ptr5 = &ptr4;
	ptr6 = &ptr5;
	ptr7 = &ptr6;
	ptr8 = &ptr7;

	ft_ultimate_ft(ptr8);

	ft_putnbr(nb);
	ft_putchar('\n');
	return (0);
}