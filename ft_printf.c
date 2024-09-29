/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctoribio <ctoribio@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 15:37:10 by ctoribio          #+#    #+#             */
/*   Updated: 2024/09/17 18:57:42 by ctoribio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

void	print_format(const char c, va_list args, int *nchars)
{
	if (c == 'c')
		ft_printchar(va_arg(args, int), nchars);
	else if (c == 's')
		ft_printstr(va_arg(args, char *), nchars);
	else if (c == 'd' || c == 'i')
		ft_printint(va_arg(args, int), nchars);
	else if (c == 'u')
		ft_printuint(va_arg(args, unsigned int), nchars);
	else if (c == 'p')
		ft_printmadd(va_arg(args, unsigned long long), nchars);
	else if (c == 'x')
		ft_printhex((unsigned long long)
			va_arg(args, unsigned int), "0123456789abcdef", nchars);
	else if (c == 'X')
		ft_printhex((unsigned long long)
			va_arg(args, unsigned int), "0123456789ABCDEF", nchars);
	else if (c == '%')
		*nchars += write(1, "%%", 1);
	else
		*nchars = -1;
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
			if (!*(str))
			{
				va_end(args);
				return (-1);
			}
			print_format(*str, args, &nchars);
		}
		else
			nchars += write(1, str, 1);
		str++;
	}
	va_end(args);
	return (nchars);
}
