/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_u.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vyhuynh <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/28 17:29:27 by vyhuynh           #+#    #+#             */
/*   Updated: 2023/07/31 19:13:50 by vyhuynh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"
// Print unsigned decimal (base 10) number
void	ft_putnbr_u(unsigned int n, int *len)
{
	if (n >= 10)
	{
		ft_putnbr_u(n / 10, len);
		ft_putchar(n % 10 + '0', len);
	}
	else 
		ft_putchar(n % 10 + '0', len);
}
