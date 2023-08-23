/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vyhuynh <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 12:58:31 by vyhuynh           #+#    #+#             */
/*   Updated: 2023/07/20 10:46:46 by vyhuynh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
** ft_strncmp() compares the most n characters of 2 string and
** stop comparing when reaching n character or encountering null terminator,
** or finding mismatached character.
** It returns 0 if 2 string are equals
** If mismatch before reaching n character, returns s1[i] - s2[i]
*/

int	ft_strncmp(const char *s1, char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n && (s1[i] != '\0' || s2[i] != '\0'))
	{
		if (s1[i] != s2[i])
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
		i++;
	}
	return (0);
}
