#include "../garbage.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*p;
	size_t	i;
	int		j;

	j = 0;
	if (s1 != NULL && s2 != NULL )
		i = (ft_strlen(s1)) + (ft_strlen(s2));
	else
		return (0);
	p = (char *)malloc(i + 1);
	if (!p)
		return (0);
	add_to_garbage(p);
	while (s1[j])
		*p++ = s1[j++];
	j = 0;
	while (s2[j])
		*p++ = s2[j++];
	*p = '\0';
	return (p - i);
}