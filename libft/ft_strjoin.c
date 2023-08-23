/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vyhuynh <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/18 16:22:55 by vyhuynh           #+#    #+#             */
/*   Updated: 2023/07/20 10:42:16 by vyhuynh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
** ft_strjoin() joins 2 string s1 and s2
** s1 is the prefix string
** s2 is the suffix string
** The function returns new string,
** and returns NULL if allocation fails
*/

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	int		i;
	int		j;
	int		k;

	str = (char *)malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
	if (str == NULL)
		return (NULL);
	i = 0;
	j = 0;
	k = 0;
	while (s1[i] != '\0')
	{
		str[k] = s1[i];
		i++;
		k++;
	}
	while (s2[j] != '\0')
	{
		str[k] = s2[j];
		j++;
		k++;
	}
	str[k] = '\0';
	return (str);
}
