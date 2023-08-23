/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vyhuynh <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 11:32:39 by vyhuynh           #+#    #+#             */
/*   Updated: 2023/07/20 10:28:36 by vyhuynh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
** ft_strrchr search for last occurence of a character in string
** If character is null character then return pointer to null terminator of str
** If character found then return pointer to last occurence
** If character not found then return NULL
*/

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = ft_strlen(s);
	if ((char)c == '\0')
		return ((void *)s + i);
	while (i >= 0)
	{
		if (s[i] == (char)c)
			return ((void *)s + i);
		i--;
	}
	return (NULL);
}
