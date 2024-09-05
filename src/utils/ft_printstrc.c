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

int ft_printchar(char c)
{
	if (write(1, &c, 1) != 1)
		return (-1);
	return (1);
}

int ft_printstr(char *str)
{
	int	nchars;

	nchars = 0;
	while (*str)
	{
		if (write(1, str, 1) != 1)
			return (-1);
		nchars++;
		str++;
	}
	return (nchars);
}