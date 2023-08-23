/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vyhuynh <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/28 14:29:33 by vyhuynh           #+#    #+#             */
/*   Updated: 2023/08/02 20:59:37 by vyhuynh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

// Includes standard C Libraries
# include <unistd.h>
# include <stdlib.h>
# include <stdarg.h>
# include <stddef.h>

// Prototype
int		ft_printf(const char *format, ...);
void	ft_putnbr(int n, int *len);
void	ft_putnbr_u(unsigned int n, int *len);
void	ft_putstr(char *s, int *len);
void	ft_putchar(char c, int *len);
void	ft_putptr(void *ptr, int *len);
void	ft_puthex(unsigned int n, int *len, char format);

#endif
