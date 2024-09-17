/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctoribio <ctoribio@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 17:55:25 by ctoribio          #+#    #+#             */
/*   Updated: 2024/09/17 17:55:28 by ctoribio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>

int		ft_printf(const char *str, ...);
void	ft_printchar(char c, int *nchars);
void	ft_printstr(char *str, int *nchars);
void	ft_printint(int n, int *nchars);
void	ft_printuint(unsigned int n, int *nchars);
void	ft_printmadd(unsigned long long addr, int *nchars);
void	ft_printhex(unsigned long long num, char *base, int *nchars);

#endif
