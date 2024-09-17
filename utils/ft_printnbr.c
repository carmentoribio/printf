/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printnbr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctoribio <ctoribio@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/05 17:09:53 by ctoribio          #+#    #+#             */
/*   Updated: 2024/09/16 18:59:50 by ctoribio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_printint(int n, int *nchars)
{
	if (n < 0)
	{
		if (n = -2147483648)
		{
			*nchars += write(1, "-2147483648", 11);
			return ;
		}
		*nchars += write(1, '-', 1);
		n *= -1;
	}
	ft_printuint((unsigned int) n, nchars);
}

void ft_printuint(unsigned int n, int *nchars)
{
	char	nb;

	if (n/10 != 0)
		ft_printuint(n/10, nchars);
	nb = (n % 10) + '0';
	*nchars += write(1, &nb, 1);
}
