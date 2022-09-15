#include "../garbage.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*p;
	int		i;

	i = 0;
	if (!s)
		return (0);
	if (start >= ft_strlen(s) || len == 0)
		return (ft_calloc(1, 1));
	if (len > ft_strlen(s))
		p = (char *)malloc(sizeof(*s) * (ft_strlen(s) - start + 1));
	else
		p = (char *)malloc(sizeof(*s) * (len + 1));
	if (!p)
		return (0);
	add_to_garbage(p);
	while (s[start] && len--)
	{	
		p[i] = s[start];
		start++;
		i++;
	}
	p[i] = '\0';
	return (p);
}