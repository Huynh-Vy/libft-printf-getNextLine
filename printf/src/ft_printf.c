/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vyhuynh <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/28 17:29:12 by vyhuynh           #+#    #+#             */
/*   Updated: 2023/08/02 18:52:02 by vyhuynh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"
/*
** ft_printf returns the total count of characters that were sucessfully printed,
** as result of the function call
** ft_check_format: check for the format of ft_printf
** va_list, va_start, va_arg, va_end: macros in C define in the <stdarg.h>,
** which provides the mechanism for working with a variable number of arguments
** in function
** va_list: list of arguments passed in function
** va_start: take the va_list arguments and the first argument in function
** va_arg: access the arguments in function one by one
** va_end: clean up the va_list after using it
*/
static void	ft_check_format(char format, va_list args, int *len, int *i)
{
	if (format == 'c')
		ft_putchar(va_arg(args, int), len);
	else if (format == 's')
		ft_putstr(va_arg(args, char *), len);
	else if (format == 'p')
		ft_putptr(va_arg(args, void *), len);
	else if (format == 'd' || format == 'i')
		ft_putnbr(va_arg(args, int), len);
	else if (format == 'u')
		ft_putnbr_u(va_arg(args, unsigned int), len);
	else if (format == 'x' || format == 'X')
		ft_puthex(va_arg(args, unsigned int), len, format);
	else if (format == '%')
		ft_putchar('%', len);
	else
		(*i)--;
}

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int		i;
	int		len;

	i = 0;
	len = 0;
	va_start(args, format);
	while (format[i] != '\0')
	{
		if (format[i] == '%')
		{
			i++;
			ft_check_format(format[i], args, &len, &i);
		}
		else
		{
			ft_putchar((char)format[i], &len);
		}
		i++;
	}
	va_end(args);
	return (len);
}
