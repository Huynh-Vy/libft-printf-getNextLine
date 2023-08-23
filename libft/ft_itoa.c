/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vyhuynh <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/19 09:25:32 by vyhuynh           #+#    #+#             */
/*   Updated: 2023/07/20 10:33:10 by vyhuynh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** The function returns a string representing the input integer
** Returns NULL if the allocation fails
*/
static unsigned int	ft_numbersize(int n)
{
	unsigned int	length;

	length = 0;
	if (n == 0)
		return (1);
	if (n < 0)
		length += 1;
	while (n != 0)
	{
		n = n / 10;
		length++;
	}
	return (length);
}

char	*ft_itoa(int n)
{
	char			*str;
	unsigned int	number;
	unsigned int	length;

	length = ft_numbersize(n);
	str = (char *)malloc(sizeof(char) * (length + 1));
	if (str == NULL)
		return (NULL);
	if (n < 0)
	{
		str[0] = '-';
		number = -n;
	}
	else
		number = n;
	if (number == 0)
		str[0] = '0';
	str[length] = '\0';
	while (number != 0)
	{
		str[length - 1] = (number % 10) + '0';
		number = number / 10;
		length--;
	}
	return (str);
}
