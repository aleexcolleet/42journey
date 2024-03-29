/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acollet- <acollet-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 12:31:46 by acollet-          #+#    #+#             */
/*   Updated: 2024/01/25 13:06:53 by acollet-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putchar(char c, int j) //on succes write returns (-1);
{
	if (j == -1)
		return (-1);
	else if (write(1, &c, 1) == -1)
		return (-1);
	j++;
	return (j);
}

//write() = -1 si no funciona
