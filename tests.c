/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tests.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctoribio <ctoribio@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 10:18:16 by ctoribio          #+#    #+#             */
/*   Updated: 2024/09/18 19:02:53 by ctoribio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>
#include <limits.h>

int	main()
{
	// Tests char ---------------------
	printf("TESTS CHAR\n\n");
	
	char c = 'c';
	printf("return printf(): %d\treturn ft_printf(): %d\n\n",
			printf("%c\n", c), 
			ft_printf("%c\n", c));
	
	// Tests str ----------------------
	printf("TESTS STRING\n\n");
	
	char *str = "Hola Mundo!";
	printf("return printf(): %d\treturn ft_printf(): %d\n\n",
			printf("%s\n", str), 
			ft_printf("%s\n", str));
	
	// Tests int ----------------------	
	printf("TESTS INT\n\n");
	
	int n = 2;
	printf("return printf(): %d\treturn ft_printf(): %d\n\n",
			printf("%d\n", n), 
			ft_printf("%d\n", n));
	
	// Tests uint ---------------------
	printf("TESTS UNSIGNED INT\n\n");

	unsigned int un = 334521;
	printf("return printf(): %d\treturn ft_printf(): %d\n\n",
			printf("%u\n", un),
			ft_printf("%u\n", un));

	// Tests hex ----------------------
	printf("TESTS HEXADECIMAL\n\n");

	unsigned int x = 24932;
	printf("return printf(): %d\treturn ft_printf(): %d\n\n",
			printf("%x\n", x),
			ft_printf("%x\n", x));

	// Tests mem ----------------------
	printf("TESTS MEMORY ADDRESS\n\n");

	printf("return printf(): %d\treturn ft_printf(): %d\n\n",
			printf("%p\n", &x),
			ft_printf("%p\n", &x));

	// Tests mix ----------------------
	printf("TESTS MIXED FLAGS\n\n");
	
	printf("return printf(): %d\treturn ft_printf(): %d\n\n",
			printf("Hola %s, esto es un char: %c que está alocado en %p\nEl mayor entero es: %d\nEl menor entero es: %i\nEl mayor unsigned int es: %u, con valor hexadecimal %X (o bien %x)\nMe queda un 42%%\n",
				"holita", c, &c, INT_MAX, INT_MIN, UINT_MAX, UINT_MAX, UINT_MAX),
			ft_printf("Hola %s, esto es un char: %c que está alocado en %p\nEl mayor entero es: %d\nEl menor entero es: %i\nEl mayor unsigned int es: %u, con valor hexadecimal %X (o bien %x)\nMe queda un 42%%\n",
				"holita", c, &c, INT_MAX, INT_MIN, UINT_MAX, UINT_MAX, UINT_MAX));

	printf("return printf(): %d\treturn ft_printf(): %d\n\n",
			printf("%d%u%s%%%%%%%s%X%p\n", 983204392, 88, "hola", "hello", 95654, &x),
			ft_printf("%d%u%s%%%%%%%s%X%p\n", 983204392, 88, "hola", "hello", 95654, &x));

	// Tests casos limite -------------
	printf("TESTS CASOS LIMITE\n\n");

	printf("return printf(): %d\treturn ft_printf(): %d\n\n",
			printf("Character: '%c'\n", '\0'),
			ft_printf("Character: '%c'\n", '\0')
			);	
	
	printf("return printf(): %d\treturn ft_printf(): %d\n\n",
			printf("String: '%s'\n", (char *)NULL),
			ft_printf("String: '%s'\n", (char *)NULL)
			);

	printf("return printf(): %d\treturn ft_printf(): %d\n\n",
			printf("String: '%s'\n", ""),
			ft_printf("String: '%s'\n", "")
			);
	
	printf("return printf(): %d\treturn ft_printf(): %d\n\n",
			printf("Pointer: %p\n", (void *)NULL),
			ft_printf("Pointer: %p\n", (void *)NULL)
			);

	printf("return printf(): %d\treturn ft_printf(): %d\n\n",
			printf("Decimal: %d\n", INT_MIN),
			ft_printf("Decimal: %d\n", INT_MIN)
			);

	printf("return printf(): %d\treturn ft_printf(): %d\n\n",
			printf("Unsigned: %u\n", -1),
			ft_printf("Unsigned: %u\n", -1)
			);

	printf("return printf(): %d\treturn ft_printf(): %d\n\n",
			printf("Hex lower: %x\n", 255),
			ft_printf("Hex lower: %x\n", 255)
			);

	printf("return printf(): %d\treturn ft_printf(): %d\n\n",
			printf("Hex upper: %X\n", 255),
			ft_printf("Hex upper: %X\n", 255)
			);

	return (0);
}
