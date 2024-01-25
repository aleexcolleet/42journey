/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acollet- <acollet-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 12:32:40 by acollet-          #+#    #+#             */
/*   Updated: 2024/01/25 14:08:47 by acollet-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

//just for test purposes
#include <stdio.h>
int	main(void)
{
	char *string = "Hello, World!";
	int	integer = 0;
	char character = 'A';
	void *ptr = (void *)&integer;

	//~~probandoo~~//
	
	//--char--//
		ft_printf("\n<----------------------------->\n\n");
	ft_printf("Flag 'c' ~ char\n\n");
	ft_printf("fake: %c\n", character);
	printf("real: %c\n", character);
		ft_printf("\n<------------------------------>\n\n");
	
	//--string--//
	ft_printf("flag 's' ~ string\n\n");
	ft_printf("fake: %s\n", string);
	printf("real: %s\n", string);
		ft_printf("\n------------------------------>\n\n");

	//--pointer--//
	ft_printf("Flag 'p' ~pointerDirection\n\n");
	ft_printf("Fake: %p\n", ptr);
	printf("Real: %p\n", ptr);
		ft_printf("\n------------------------------>\n\n");

	//--decimal(base10)--//
	ft_printf("Flag 'd' ~entero(base10)\n\n");
	ft_printf("Fake: %d\n", integer);
	printf("Real: %d\n", integer);
		ft_printf("\n------------------------------>\n\n");
	
	//--entero(base10)--//
	
	ft_printf("Flag 'i' ~entero(base10)\n\n");
	ft_printf("Fake: %i\n", integer);
	printf("Real: %i\n", integer);
		ft_printf("\n------------------------------>\n\n");

	//--unsigned decimal(base10)--//
	
	ft_printf("Flag 'u' ~unsigned decimal(base10)\n\n");
	ft_printf("Fake: %u\n", integer);
	printf("Real: %u\n", integer);
	ft_printf("\n------------------------------>\n\n");

	//--hexadecimalNumber--//
	ft_printf("Flag 'u' ~hexaMin(base16)\n\n");
	ft_printf("Fake: %x\n", integer);
	ft_printf(" %x ", 0);
	printf("Real: %x\n", integer);
	ft_printf("\n------------------------------>\n\n");

	//--%--/
	ft_printf("%%\n");
	printf("% %\n");
	return (0);
}
