/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acollet- <acollet-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/12 12:42:04 by acollet-          #+#    #+#             */
/*   Updated: 2024/01/12 15:36:26 by acollet-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

size_t	ft_print_case(char *a, va_list args, size_t i)
{
	size_t	len;

	i++;
	len = 0;
	if (a[i] == 'c')
		len += ft_rputchar(va_arg(args, int));
	if (a[i] == 's')
		len += ft_rputstr(va_arg(args, char *));
	if (a[i] == 'p')
	{
		len += ft_rputstr ("0x");
		len += ft_rputaddress(va_arg(args, unsigned long long int),
				"0123456789abcdef");
	}
	if (a[i] == 'd' || a[i] == 'i')
		len += ft_rputnbr(va_arg(args, int));
	if (a[i] == 'u')
		len += ft_rputnbr(va_arg(args, unsigned int));
	if (a[i] == 'x')
		len += ft_rputnbr_base(va_arg(args, unsigned int), 16,
				"0123456789abcdef");
	if (a[i] == 'X')
		len += ft_rputnbr_base(va_arg(args, unsigned int), 16,
				"0123456789ABCDEF");
	return (len);
}
