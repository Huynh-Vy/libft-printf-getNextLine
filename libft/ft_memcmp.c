/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vyhuynh <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 14:06:11 by vyhuynh           #+#    #+#             */
/*   Updated: 2023/07/20 10:35:32 by vyhuynh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
** ft_memcmp compares the first n bytes of memory blocks pointed to by s1 and s2.
** If differnce found, it returns the first difference bytes s1[i] - s2[i].
** If all bytes are equal, it returns 0
*/

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;
	char	*p1;
	char	*p2;	

	i = 0;
	p1 = (char *)s1;
	p2 = (char *)s2;
	while (i < n)
	{
		if (p1[i] != p2[i])
			return ((unsigned char)p1[i] - (unsigned char)p2[i]);
		i++;
	}
	return (0);
}
