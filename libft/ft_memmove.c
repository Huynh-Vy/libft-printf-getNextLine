/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vyhuynh <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/15 22:13:59 by vyhuynh           #+#    #+#             */
/*   Updated: 2023/07/20 10:38:28 by vyhuynh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
** ft_memmove coies a block of memory from one location to another,
** even when the src and dest memory regions overlap
** It is similar to ft_memcpy but handle overlapping memory region correctly.
** If src < dest means memory pointed to source starts before dest,
** then memory block is overlap => copy backward to handle overlap
** If src > dest then copy forward when no overlap
*/

void	*ft_memmove(void *s1, const void *s2, size_t n)
{
	size_t	i;

	if (s1 == NULL && s2 == NULL)
		return (NULL);
	if (s2 < s1)
	{
		i = n;
		while (i > 0)
		{
			i--;
			((char *)s1)[i] = ((char *)s2)[i];
		}
	}
	else 
	{
		i = 0;
		while (i < n)
		{
			((char *)s1)[i] = ((char *)s2)[i];
			i++;
		}
	}
	return (s1);
}
