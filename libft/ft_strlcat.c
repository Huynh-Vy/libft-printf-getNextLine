/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vyhuynh <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 14:20:15 by vyhuynh           #+#    #+#             */
/*   Updated: 2023/07/20 10:43:24 by vyhuynh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
** ft_strlcat() appends the source str into the dest str,
** until the size - 1 character
** It returns the length of string it tried to create - dest string + src string
** If size == 0 return the src string length
** If the size <= dest string => return src string length + size
*/

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	src_len;
	size_t	dest_len;

	i = 0;
	j = 0;
	src_len = ft_strlen(src);
	dest_len = ft_strlen(dest);
	if (size == 0)
		return (src_len);
	if (size <= dest_len)
		return (src_len + size);
	while (dest[i] != '\0')
		i++;
	while (src[j] != '\0' && (i + j) < size - 1)
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j] = '\0';
	return (dest_len + src_len);
}
