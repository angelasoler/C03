#include <stdio.h>
#include <string.h>

int	main()
{
	char a[10] = "ola mundo";
	char b[100] = "ola Mundo";

	// strcpy(a, b);
	strncat(a, b, 15);

	printf("%s\n", a);
}
