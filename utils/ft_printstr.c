/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printstrc.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctoribio <ctoribio@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/05 17:09:41 by ctoribio          #+#    #+#             */
/*   Updated: 2024/09/05 17:09:43 by ctoribio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_printchar(char c, int *nchars)
{
	*nchars += write(1, &c, 1);
}

void	ft_printstr(char *str, int *nchars)
{
	if (!str)
	{
		*nchars += write(1, "(null)", 6);
		return ;
	}
	while (*str)
	{
		*nchars += write(1, str, 1);
		str++;
	}
}