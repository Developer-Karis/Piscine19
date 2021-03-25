#include <stdio.h>
#include <string.h>

char	*ft_strcpy(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s2[i] != '\0')
	{
		s1[i] = s2[i];
		i++;
	}
	s1[i] = '\0';
	return (s1);
}

int		main(void)
{
	char test[] = "yo";
	char test2[] = "hello";

	printf("%s\n", test);
	ft_strcpy(test, test2);
	printf("%s\n", test);
	return (0);
}
