/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vyhuynh <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/15 21:59:51 by vyhuynh           #+#    #+#             */
/*   Updated: 2023/07/15 22:04:25 by vyhuynh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Bzero used to block each byte of specified memory to zero
void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, 0, n);
}
