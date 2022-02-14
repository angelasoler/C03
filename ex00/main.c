#include <string.h>
#include <stdio.h>

int	main()
{
	int x;
	char *a = "vamos comparar strings";
	char *b = "ver se tem o mesmo tamanho";

	x = strcmp(a, b);
	printf("%d", x);
}
