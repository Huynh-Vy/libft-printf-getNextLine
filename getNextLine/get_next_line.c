/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vyhuynh <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/07 14:32:06 by vyhuynh           #+#    #+#             */
/*   Updated: 2023/08/10 18:00:15 by vyhuynh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
/*
** ft_read_line(): reads the first line of the file and returns that line.
** ft_move_start(): extract the text file after the first new line character,
** then returns remain part of the file.
** get_next_line(): the function reads the file 
** and save data into the pointer tmp,
** then appends the data in tmp to static buffer start_str 
** and free the tmp. 
** Then it continues the process until the new line character can not be found 
** and reaches to the end of the file. 
** After that, the function calls ft_read_line()
** to read the first line of the start_str (before '\n'), returns
** that line and move the start str to start at the next line. 
** The function can be tested with open() and close as below:
// int main(void)
// {
//	int fd = open("read_error.txt", O_RDONLY);
// 	if (fd == -1)
// 	{
// 		printf("%s", "Error opening file");
// 		return (1);
// 	}
// 	char *line;
// 	while ((line = get_next_line(fd)) != NULL)
// 	{
// 		printf("%s", line);
// 		free(line);
// 	}
// 	close(fd);
// 	return (0);
// }
*/
char	*ft_read_line(char *start)
{
	int		i;
	char	*line;

	if (start == NULL || !start[0])
		return (NULL);
	i = 0;
	while (start[i] != '\0' && start[i] != '\n')
		i++;
	if (start[i] == '\n')
		i++;
	line = (char *)malloc((1 + i) * sizeof(char));
	if (!line)
		return (NULL);
	i = 0;
	while (start[i] && start[i] != '\n')
	{
		line[i] = start[i];
		i++;
	}
	if (start[i] == '\n')
		line[i++] = '\n';
	line[i] = '\0';
	return (line);
}

char	*ft_move_start(char	*start)
{
	char	*new_buff;
	int		i;
	int		j;

	i = 0;
	while (start[i] != '\0' && start[i] != '\n')
		i++;
	if (start[i] == '\0')
	{
		free(start);
		return (NULL);
	}
	i += (start[i] == '\n');
	new_buff = (char *)malloc(1 + ft_strlen(start) - i);
	if (!new_buff)
		return (NULL);
	j = 0;
	while (start[i + j] != '\0')
	{
		new_buff[j] = start[i + j];
		j++;
	}
	new_buff[j] = '\0';
	free(start);
	return (new_buff);
}

char	*ft_handle_error(char *tmp, char **start_str)
{
	free(tmp);
	if (*start_str)
	{
		free(*start_str);
		*start_str = NULL;
	}
	return (NULL);
}

char	*get_next_line(int fd)
{
	char		*tmp;
	int			byte_read;
	static char	*start_str;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	byte_read = 1;
	tmp = (char *)malloc(1 + BUFFER_SIZE * sizeof(char));
	if (!tmp)
		return (NULL);
	while (!(ft_strchr(start_str, '\n')) && byte_read != 0)
	{
		byte_read = read(fd, tmp, BUFFER_SIZE);
		if (byte_read == -1)
			return (ft_handle_error(tmp, &start_str));
		tmp[byte_read] = '\0';
		start_str = ft_strjoin(start_str, tmp);
	}
	free(tmp);
	tmp = ft_read_line(start_str);
	start_str = ft_move_start(start_str);
	return (tmp);
}
