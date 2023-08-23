/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vyhuynh <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/19 16:08:53 by vyhuynh           #+#    #+#             */
/*   Updated: 2023/07/20 10:39:10 by vyhuynh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** s: the string to output
** fd: the file descriptor on which to write
** Ouputs the string 's' to the given file
*/
void	ft_putstr_fd(char *s, int fd)
{
	write(fd, s, ft_strlen(s));
}
