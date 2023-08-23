/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vyhuynh <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/28 17:29:43 by vyhuynh           #+#    #+#             */
/*   Updated: 2023/07/31 21:56:40 by vyhuynh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"
// Print a string
void	ft_putstr(char *s, int *len)
{
	int	i;

	i = 0;
	if (s == NULL)
	{
		write(1, "(null)", 6);
		(*len) += 6;
		return ;
	}
	while (s != NULL && s[i] != '\0')
	{
		ft_putchar(s[i], len);
		i++;
	}
}
