/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vyhuynh <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 16:23:12 by vyhuynh           #+#    #+#             */
/*   Updated: 2023/07/20 10:41:19 by vyhuynh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
** ft_strdup takes a pointer to a string as input and returns a pointer,
** to a newly allocated memory block containing a duplicated of the input string.
** The function calculates the length of input string included null terminator,
** then allocates the memory for duplicate string using malloc().
** If the allocation successful, then the content of the original string
** is copied to the newly allocated memory using ft_strlcpy().
*/

char	*ft_strdup(const char *s)
{
	char	*ptr;
	int		len;
	int		i;

	len = ft_strlen(s) + 1;
	ptr = (char *)malloc(len);
	if (ptr == NULL)
		return (NULL);
	i = 0;
	while (i < len)
	{
		ptr[i] = s[i];
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}
