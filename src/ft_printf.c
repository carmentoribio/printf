/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctoribio <ctoribio@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 15:37:10 by ctoribio          #+#    #+#             */
/*   Updated: 2024/08/19 17:02:24 by ctoribio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
# include "../inc/libft.h"
# include <stdarg.h>


int	print_format(const char c, va_list args)
{
	int	nchars;

	if (c == 'c')
		nchars = ft_printchar(va_arg(args, char));
	else if (c == 's')
		nchars = ft_printchar(va_arg(args, char *));
	else if (c == 'd' || c == 'i')
		nchars = ft_printint(va_arg(args, int));
	else if (c =='u')
		nchars = ft_printuint(va_arg(args, unsigned int));
	else if (c == 'p')
		// memory address
	else if (c=='x')
		// hexadecimal en minuscula
	else if (c == 'X')
		// hexadecimal en mayuscula
	else if (c == '%')
	{
		write(1, '%', 1);
		nchars = 1;
	}
	else
		nchars = -1;

	return (nchars);
}

int	ft_printf(const char *str, ...)
{
	va_list	args;
	int		nchars;

	va_start(args, str);
	nchars = 0;
	while (*str)
	{
		if (*str == '%')
		{
			str++;
			nchars += print_format(*str, args);
			// TODO if nchars <= 0 
		}
		else
		{
			write(1, str, 1);
			nchars++;
		}
		str++;
	}
	va_end(args);
	return (nchars);
}
