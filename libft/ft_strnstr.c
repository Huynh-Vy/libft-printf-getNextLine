/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vyhuynh <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 14:05:04 by vyhuynh           #+#    #+#             */
/*   Updated: 2023/07/20 10:48:19 by vyhuynh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
** ft_strnstr() searches for the first occurence of the substr needle,
** within the string haystack up to maximum of len characters.
** If needle is empty string, returns a pointer to haystack.
** If match is found, returns a pointer to the start,
** of the matching substr in haystack.
** If no match is found, returns NULL
*/

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	haystack_len;
	size_t	needle_len;

	i = 0;
	haystack_len = ft_strlen(haystack);
	needle_len = ft_strlen(needle);
	if (needle_len == 0)
		return ((char *)haystack);
	while (i < len && i < haystack_len)
	{
		if (haystack[i] == needle[0])
		{
			j = 0;
			while (j < needle_len && i + j < len && 
				haystack[i + j] == needle[j])
				j++;
			if (j == needle_len)
				return ((char *)(haystack + i));
		}
		i++;
	}
	return (NULL);
}
