#include <stdio.h>
#include <string.h>

int	main()
{
	int x;
	char a[10] = "ola mundo";
	char b[100] = "ola Mundo";

	x = strncmp(a, b, 5);
	printf("%d", x);
}
