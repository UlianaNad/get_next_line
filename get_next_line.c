/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: unadoroz <unadoroz@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/13 09:12:14 by unadoroz          #+#    #+#             */
/*   Updated: 2025/05/14 15:10:39 by unadoroz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <stdio.h>

char *get_next_line(int fd)
{	
	static char *buffer;
	int bytes_to_read;

	buffer = ft_calloc(BUFFER_SIZE + 1, sizeof(char));
	if(!buffer)
		return(NULL);	
	bytes_to_read = read(fd, buffer, BUFFER_SIZE);
	if(bytes_to_read <= 0)
		return(free	(buffer), NULL);
	return (buffer);
}

int main(void)
{
	static int count = 1;
	char *s;
	int fd = open("test.txt", O_RDONLY);

	if (fd == -1)
	{
		printf("Error opening file\n");
		return(1);
	}
	while(1)
	{
		printf("ft_calloc#[%d]---", count++);
		s = get_next_line(fd);
		if (s == NULL)
			break;
		count++;
		printf("[%d]:%s\n",count,s);
		free(s);
		s = NULL;
	}
	close(fd);
	return (0);
}
