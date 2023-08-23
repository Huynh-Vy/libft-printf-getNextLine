/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vyhuynh <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/28 17:29:39 by vyhuynh           #+#    #+#             */
/*   Updated: 2023/08/02 13:12:39 by vyhuynh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"
// Print pointer, the pointer argument printed in hexadecimal format
void	ft_putptr(void *ptr, int *len)
{
	char	str[25];
	char	*base_character;
	int		i;
	size_t	ptr_value;

	base_character = "0123456789abcdef";
	i = 0;
	write(1, "0x", 2);
	(*len) += 2;
	if (ptr == NULL)
	{
		ft_putchar('0', len);
		return ;
	}
	ptr_value = (size_t)ptr;
	while (ptr_value != 0)
	{
		str[i] = base_character[ptr_value % 16];
		ptr_value = ptr_value / 16;
		i++;
	}
	str[i] = '\0';
	while (i--)
		ft_putchar(str[i], len);
}
