/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tests.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctoribio <ctoribio@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 10:18:16 by ctoribio          #+#    #+#             */
/*   Updated: 2024/09/18 11:14:38 by ctoribio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

int	main()
{
	// Tests char ---------------------
	printf("TESTS CHAR\n\n");
	
	char c = 'c';
	printf("return printf(): %d\nreturn ft_printf(): %d\n",
			printf("%c\n", c), 
			ft_printf("%c\n", c));
	
	// Tests str ----------------------
	printf("TESTS STRING\n\n");
	
	char *str = "Hola Mundo!";
	printf("return printf(): %d\nreturn ft_printf(): %d\n",
			printf("%s\n", str), 
			ft_printf("%s\n", str));
	
	// Tests int ----------------------	
	printf("TESTS INT\n\n");
	
	int n = 2;
	printf("return printf(): %d\nreturn ft_printf(): %d\n",
			printf("%d\n", n), 
			ft_printf("%d\n", n));
	
	// Tests uint ---------------------
	printf("TESTS UNSIGNED INT\n\n");

	unsigned int un = 334521;
	printf("return printf(): %d\nreturn ft_printf(): %d\n",
			printf("%u\n", un),
			ft_printf("%u\n", un));

	// Tests hex ----------------------
	printf("TESTS HEXADECIMAL\n\n");

	unsigned int x = 24932;
	printf("return printf(): %d\nreturn ft_printf(): %d\n",
			printf("%x\n", x),
			ft_printf("%x\n", x));

	// Tests mem ----------------------
	printf("TESTS MEMORY ADDRESS\n\n");

	printf("return printf(): %d\nreturn ft_printf(): %d\n",
			printf("%p\n", &x),
			ft_printf("%p\n", &x));

	// Tests mix ----------------------
	printf("TESTS MIXED FLAGS\n\n");
	

	return (0);
}
