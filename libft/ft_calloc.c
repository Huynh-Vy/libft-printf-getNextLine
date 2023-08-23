/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vyhuynh <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 15:14:12 by vyhuynh           #+#    #+#             */
/*   Updated: 2023/07/20 10:32:41 by vyhuynh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
** Implement ft_calloc() with malloc(), the num of bytes = count * size
** if the memory allocation is successful (malloc returns non-NULL pointer),
** then the ft_bzero() used to set all bytes of the allocated memory to zero
*/

void	*ft_calloc(size_t count, size_t size)
{
	void	*ptr;
	size_t	total_size;

	total_size = count * size;
	ptr = malloc(total_size);
	if (ptr == NULL)
		return (NULL);
	else 
		ft_bzero(ptr, total_size);
	return (ptr);
}
