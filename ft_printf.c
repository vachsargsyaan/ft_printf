/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vacsargs <vacsargs@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/10 18:38:05 by vacsargs          #+#    #+#             */
/*   Updated: 2023/02/10 21:59:17 by vacsargs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_for(va_list args, const char format)
{
	int i;

	i = 0;
	if(format == 's')
	{
	i += ft_chars(va_arg(args, char *));
	}
	return (i);
}

int	ft_printf(const char *str, ...)
{
	int	i;
	int	len;
	args;

	i = 0;
	len = 0;
	va_start(args, str);
	while (str[i])
	{
		if(str[i]== '%')
		{
			len += ft_for(args,str[i+1]);
			i++;
		}
		else
		{
			write(1, &str[i], 1);
			i++;
			len++;
		}
	}
	va_end(args);
	return (len);
}

int main()
{
	char *p;

	p = "sdad";
	ft_printf("sdassadsadfsd%s",p);
	return (0);
}