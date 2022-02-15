#include <stdio.h>
#include <string.h>

int	main()
{
	char a[10] = "ola mundo";
	char b[100] = "ola Mundo";

	// strcpy(a, b);
	strcat(a, b);

	printf("%s", a);
}

