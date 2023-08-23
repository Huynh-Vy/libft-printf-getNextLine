/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vyhuynh <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/19 16:02:39 by vyhuynh           #+#    #+#             */
/*   Updated: 2023/07/20 10:38:49 by vyhuynh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** c: the character to output
** fd: the file descriptor on which to write
** Ouputs the character 'c' to the given file descriptor
*/
void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
