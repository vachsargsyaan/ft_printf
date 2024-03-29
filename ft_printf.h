/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vacsargs <vacsargs@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/10 19:28:41 by vacsargs          #+#    #+#             */
/*   Updated: 2023/02/16 16:25:02 by vacsargs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>
# include <stdarg.h>

int	ft_printf(const char *str, ...);
int	ft_cahrs(const char *str);
int	ft_for(va_list args, const char format);
int	ft_printnum(int num);
int	ft_print_hex(unsigned long long nb, const char format);
int	ft_print_point(unsigned long long lu);
int	ft_it(unsigned int num);

#endif
