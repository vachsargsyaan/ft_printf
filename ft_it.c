/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_it.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vacsargs <vacsargs@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 17:43:51 by vacsargs          #+#    #+#             */
/*   Updated: 2023/02/16 16:25:32 by vacsargs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_it(unsigned int num)
{
	long				nb;
	unsigned int		i;

	nb = num;
	i = 0;
	if (nb < 0)
	{
		write(1, "-", 1);
		nb = -nb;
		i++;
	}
	if (nb > 9)
	{
		i += ft_it(nb / 10);
		i += ft_it(nb % 10);
	}
	else
	{
		nb += 48;
		write(1, &nb, 1);
		i++;
	}
	return (i);
}

// int main()
// {
// 	unsigned int i = 3000000000;
// 	printf("%u",i);
// 	printf("\n%s",ft_itoa(i));
// }