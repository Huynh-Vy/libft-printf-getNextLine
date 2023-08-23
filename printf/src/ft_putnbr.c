/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vyhuynh <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/28 17:29:32 by vyhuynh           #+#    #+#             */
/*   Updated: 2023/07/31 19:13:32 by vyhuynh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"
// Print a decimal (base 10)
void	ft_putnbr(int n, int *len)
{
	if (n == -2147483648)
	{
		write(1, "-2147483648", 11);
		(*len) += 11;
		return ;
	}
	else if (n < 0)
	{
		n = -n;
		ft_putchar('-', len);
		ft_putnbr(n, len);
	}
	else if (n >= 10)
	{
		ft_putnbr(n / 10, len);
		ft_putchar(n % 10 + '0', len);
	}
	else
	{
		ft_putchar(n % 10 + '0', len);
	}
}
