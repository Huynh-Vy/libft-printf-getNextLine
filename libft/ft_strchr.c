/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vyhuynh <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/15 23:18:07 by vyhuynh           #+#    #+#             */
/*   Updated: 2023/07/20 10:29:44 by vyhuynh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
** ft_strchr searches for first occurence of a character in str,
** returns a pointer to the first occurence if found
** Returns NULL if not found
** If the character is null character then return to null terminator of str
*/

char	*ft_strchr(const char *s, int c)
{
	int		i;

	i = 0;
	if ((char)c == '\0')
		return ((void *)s + ft_strlen(s));
	while (s[i] != '\0')
	{
		if (s[i] == (char)c)
			return ((void *)s + i);
		i++;
	}
	return (NULL);
}
