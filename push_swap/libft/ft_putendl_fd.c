
#include "push_swap.h"

void	ft_putendl_fd(char *s, int fd) //Ekrana yazdırıyoruz.
{
	if (!s)
		return ;
	write(fd, s, ft_strlen(s));
	write(fd, "\n", 1);
}
