/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printmem.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctoribio <ctoribio@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/05 17:09:31 by ctoribio          #+#    #+#             */
/*   Updated: 2024/09/05 17:09:34 by ctoribio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_printmadd(unsigned long long addr, int *nchars)
{
	if (addr == 0)
	{
		*nchars += write (1, "(nil)", 5);
		return ;
	}
	*nchars += write(1, "0x", 2);
	ft_printhex(addr, "0123456789abcdef", nchars);

}

void	ft_printhex(unsigned long long num, char* base, int *nchars)
{
	if (num/16 != 0)
		ft_printhex(num/16, base, nchars);
	*nchars += write(1, &base[num%16], 1);
}