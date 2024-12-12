#include <unistd.h>
#include <string.h>
#include <stdio.h>

size_t	ft_strcspn(const char *s, const char *reject)
{
	int		i;
	int		j;
	size_t	k;

	i = 0;
	j = 0;
	k = 0;
	while (s[i])
	{
		j = 0;
		while (reject[j])
		{
			if (s[i] == reject[j])
			{
				k = (size_t)i;
				return (k);
			}
			j++;
		}
		i++;
	}
	k = (size_t)i;
	return (k);
}
/*

int	main()
{
	printf("ft: %ld\n", ft_strcspn("123abc", "bc"));
	printf("real: %ld\n", strcspn("123abc", "bc"));
}
*/
