/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vyhuynh <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/18 19:05:36 by vyhuynh           #+#    #+#             */
/*   Updated: 2023/07/20 21:46:33 by vyhuynh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** s: the string to be split
** c: the delimiter character
** Return Value: the array of new strings resulting from split.
** NULL if the allocation fails.
** ft_wordscount(): counts words in string on delimiter character.
** ft_free_split(): free the word allocated in ft_word_allocate if
** allocation fails.
** ft_word_end(): finds the index where the current words ends in
** the input string. It iterates through string until it find the end
** of current word (where encounter character 'c' or '\0').
** ft_word_allocate(): allocates the memory for a new word from a string
** starting from index i. It uses ft_word_end() to determine the end index
** of the word in string. Then allocates memory for the word and copies
** character from input string s into newly allocted memory
*/
static int	ft_wordscount(char const *s, char c)
{
	int	i;
	int	words;

	if (!s)
		return (0);
	i = 0;
	words = 0;
	while (s[i])
	{
		if (s[i] != c)
		{
			words++;
			while (s[i] != c && s[i] != '\0')
			{
				i++;
			}
			if (s[i] == '\0')
				return (words);
		}
		i++;
	}
	return (words);
}

static char	**ft_free_split(char **strarr)
{
	int	i;

	i = 0;
	while (strarr[i])
	{
		free(strarr[i]);
		i++;
	}
	free(strarr);
	return (NULL);
}

static int	ft_word_end(char *s, char c, int i)
{
	int	end;

	end = 0;
	while (s && s[i] && end != 1)
	{
		if (s[i] != c)
		{
			while (s[i] != c && s[i] != '\0')
				i++;
			end = 1;
		}
		if (end != 1)
			i++;
	}
	return (i);
}

static char	*ft_word_allocate(char *s, char c, int i, int j)
{
	char	*word;
	int		end;

	end = 0;
	while (s && *s && end != 1)
	{
		if (*s != c)
		{
			while (s[i] != c && s[i] != '\0')
				i++;
			end = 1;
		}
		if (end != 1)
			s++;
	}
	word = (char *)malloc(i + 1);
	if (!word)
		return (NULL);
	while (s && *s && *s != c)
	{
		word[j] = *s++;
		j++;
	}
	word[j] = '\0';
	return (word);
}

char	**ft_split(char const *s, char c)
{
	char	**strarr;
	int		j;
	int		i;
	int		pos;

	j = ft_wordscount(s, c);
	i = 0;
	pos = 0;
	strarr = malloc(sizeof(char *) * (j + 1));
	if (!strarr)
		return (NULL);
	strarr[j] = NULL;
	while (i < j)
	{
		strarr[i] = ft_word_allocate((char *)(s + pos), c, 0, 0);
		if (!strarr[i])
		{
			ft_free_split(strarr);
			return (NULL);
		}
		pos = ft_word_end((char *)s, c, pos);
		i++;
	}
	return (strarr);
}
