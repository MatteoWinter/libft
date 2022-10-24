#include "libft.h"

int main(void)
{
	int i = 0;
	/*ft_isalpha*/
	i = -1;
	while (i < 530)
	{
		printf("ft: %i %c = %i\n", i, i, ft_isalpha(i));
		printf("or: %i %c = %i\n", i, i, isalpha(i));
		i++;
	}

	/*ft_isdigit*/
	i = -1;
	while (i < 530)
	{
		printf("ft: %i %c = %i\n", i, i, ft_isdigit(i));
		printf("or: %i %c = %i\n", i, i, isdigit(i));
		i++;
	}

	/*ft_tolower*/
	i = -1;
	while (i < 250)
	{
		printf("ft: %i %c = %c\n", i, i, ft_tolower(i));
		printf("or: %i %c = %c\n", i, i, tolower(i));
		i++;
	}

	/*ft_toupper*/
	i = -1;
	while (i < 250)
	{
		printf("ft: %i %c = %c\n", i, i, ft_toupper(i));
		printf("or: %i %c = %c\n", i, i, toupper(i));
		i++;
	}

	/*ft_memset*/
	size_t n = 5;
	void *s = malloc(sizeof(char) * n);
	i = 0;
	while (i < n)
	{
		printf("%c", (char)s[i]);
		i++;
	}
	free(s);

	return (0);
}
