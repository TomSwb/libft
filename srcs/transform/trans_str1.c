
#include "../../includes/ft.h"

char    *ft_lower_all(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (ft_is_upper(str[i]))
			str[i] += 32;
		i++;
	}
	return (str);
}

char    *ft_upper_all(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (ft_is_lower(str[i]))
			str[i] -= 32;
		i++;
	}
	return (str);
}

char	*ft_strcpy(char *str)
{
	char	*dest;
	int		i;

	i = 0;
	while (str[i])
	{
		dest[i] = str[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

char	*ft_strcat(char *s1, char *s2)
{
	int		i;
	int		j;

	i = 0;
	while (s1[i])
		i++;
	j = 0;
	while (s2[j])
	{
		s1[i + j] = s2[j];
		j++;
	}
	s1[i] = '\0';
	return (s1);
}

char	*ft_dup(char *str)
{
	char	*dest;
	int		i;
	int		len;

	len = ft_strlen(str);
	dest = malloc(sizeof(char) * (len + 1));
	if (!dest)
		return (NULL);
	i = 0;
	while (str[i])
	{
		dest[i] = str[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}