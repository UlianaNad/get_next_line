#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <stdlib.h>
# include <unistd.h>
# include <fcntl.h>
# include <stdint.h>

#ifdef BUFFER_SIZE
# define BUFFER_SIZE 10
#endif

char	*get_next_line(int fd);
size_t	ft_strlen(const char *str);
char	*ft_strjoin(char const *s1, char const *s2);
char	*ft_strdup(const char *s);
char	*ft_strchr(const char *s, int c);
void    *ft_calloc(size_t count, size_t size);
void    ft_bzero(void *s, size_t len);

#endif
