#ifndef GARBAGE_H
# define GARBAGE_H
# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>



typedef struct s_garbage
{
	void 	*ptr;
	struct s_garbage *next;
}t_garbage;


t_garbage  	*garbage;

//garbage
void add_to_garbage(void *ptr);
void	free_garbage();

//libft
char	*ft_substr(char const *s, unsigned int start, size_t len);
size_t	ft_strlen(const char *str);
char	*ft_strjoin(char const *s1, char const *s2);
char	*ft_strdup(const char *s1);
void	*ft_calloc(size_t count, size_t size);

#endif