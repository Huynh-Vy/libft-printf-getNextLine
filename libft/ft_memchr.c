/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vyhuynh <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 13:31:20 by vyhuynh           #+#    #+#             */
/*   Updated: 2023/07/20 10:34:43 by vyhuynh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
** ft_memchr searches for search first occurence of a byte with the value c,
** in the first n bytes of the memory block point to by s.
** It returns the pointer to the first occurence if found.
** It returns null if the byte with value c not found.
*/

void	*ft_memchr(const void *s, int c, size_t n)
{
	char	*p;
	size_t	i;

	p = (char *)s;
	i = 0;
	while (i < n)
	{
		if ((unsigned char)p[i] == (unsigned char)c)
			return ((char *)(s + i));
		i++;
	}
	return (NULL);
}
