/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vyhuynh <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/15 22:05:51 by vyhuynh           #+#    #+#             */
/*   Updated: 2023/07/20 10:36:22 by vyhuynh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
** ft_memcpy used to copy a block of memory from on location to another.
** It copies the n byte of src memory to dest memory
*/

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;
	char	*d;
	char	*s;

	if (dest == NULL && src == NULL) 
	{
		return (NULL);
	}
	i = 0;
	d = (char *)dest;
	s = (char *)src;
	while (i < n)
	{
		d[i] = s[i];
		i++;
	}
	return (dest);
}
