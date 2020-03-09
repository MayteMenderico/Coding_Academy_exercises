#include <unistd.h>

void my_putchar(char c);


void my_putnbr(int nb)
{
    if (nb < 0) {
        char c = '-';
        nb = nb * (-1);
        write(1, &c, 1);
    }
	if (nb > 10)
	{
		my_putnbr(nb / 10);
	}
	nb %= 10;
	my_putchar(nb + '0');
}


