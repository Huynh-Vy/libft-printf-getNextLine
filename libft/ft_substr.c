/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vyhuynh <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/18 15:33:17 by vyhuynh           #+#    #+#             */
/*   Updated: 2023/07/20 12:16:19 by vyhuynh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
** ft_substr() creates a substring from string s,
** from start index with the length of len.
** The function returns substring if allocation success
** If allocation fails or string s is empty, returns NULL
** If start index > string length, returns empty string
*/

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;
	size_t	i;
	size_t	s_len;

	if (s == NULL)
		return (NULL);
	s_len = ft_strlen(s);
	if (start >= s_len)
		len = 0;
	if (len > s_len)
		len = s_len;
	if (len > ((s_len - 1) - start + 1))
		len = s_len - start;
	str = (char *)malloc(len + 1);
	if (str == NULL)
		return (NULL);
	i = 0;
	while (i < len)
	{
		str[i] = s[start];
		i++;
		start++;
	}
	str[i] = '\0';
	return (str);
}
