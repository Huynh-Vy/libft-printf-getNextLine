/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vyhuynh <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 11:32:58 by vyhuynh           #+#    #+#             */
/*   Updated: 2023/07/13 14:15:01 by vyhuynh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// Dedine whether the character is printable character
int	ft_isprint(int i)
{
	if (i >= 32 && i <= 126) 
		return (1);
	return (0);
}
