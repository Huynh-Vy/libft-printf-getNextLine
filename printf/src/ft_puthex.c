/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vyhuynh <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/31 14:46:23 by vyhuynh           #+#    #+#             */
/*   Updated: 2023/07/31 19:14:04 by vyhuynh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"
// Print a number in hexadecimal (base 16) uppercase or lowercase format
void	ft_puthex(unsigned int n, int *len, char format)
{
	char	str[25];
	char	*base_character;
	int		i;

	if (format == 'X')
		base_character = "0123456789ABCDEF";
	else
		base_character = "0123456789abcdef";
	i = 0;
	if (n == 0)
	{
		ft_putchar('0', len);
		return ;
	}
	while (n != 0)
	{
		str[i] = base_character[n % 16];
		n = n / 16;
		i++;
	}
	str[i] = '\0';
	while (i--)
		ft_putchar(str[i], len);
}
