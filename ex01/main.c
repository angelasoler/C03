#include <stdio.h>
#include <string.h>

int	main()
{
	int x;
	char a[10] = "ola mundo";
	char b[100] = "";

	x = strncmp(a, b, 2);
	printf("%d", x);
}
