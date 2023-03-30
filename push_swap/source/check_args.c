

#include "push_swap.h"

void	ft_error(char *str)
{
	ft_putendl_fd(str, 2);
	exit(0);
}

static int	ft_isrepeat(int num, char **av, int i)
{
	i++;
	while (av[i])
	{
		if (ft_atoi(av[i]) == num)
			return (1);
		i++;
	}
	return (0);
}

static int	ft_isnum(char *num)
{
	int	i;

	i = 0;
	if (num[0] == '-')
		i++;
	if (!num[i])
		return (0);	
	while (num[i])
	{
		if (!ft_isdigit(num[i]))
			return (0);
		i++;
	}
	return (1);
}

void	check_args(int ac, char **av) //Argümanlarımızı kontrol ediyoruz.
{
	int		i;
	long	num;
	char	**tab;

	i = 0;
	if (ac == 2) //Eğer argüman sayım 2 ise ./push_swap ve  "2 1 21 123" çift tırnak olduğunu anlıyorum.
		tab = ft_split(av[1], ' '); //Ve 1. argümanımı split'e gönderip ayırıyorum.
	else //Değilse
	{
		i = 1; //I' mi 1'e eşitliyorum ki direkt 1. argümanın ilk basamağından başlasın diye
		tab = av; //argümanlarım üzerinde kontrol yapabilmem için çift matrisli tanımladığım tab'a eşitliyorum.
	}
	while (tab[i]) //Tab'ıkmın i'si bulunduğu durumda
	{
		num = ft_atoi(tab[i]); //tab[i] ascci'to integer yapıyorum.
		if (!ft_isnum(tab[i])) //numeric karakter değils
			ft_error("Error"); //Error
		if (ft_isrepeat(num, tab, i)) //tekrar eden sayı varsa
			ft_error("Error"); //Error 
		if (num < -2147483648 || num > 2147483647) //Integerin en büyük değeri veya en küçük değerini geçen bir değer varsa
			ft_error("Error"); //Error 
		i++; 
	}
	if (ac == 2)
		ft_free_str(tab); //tab'ı freeliyoruz.
}
