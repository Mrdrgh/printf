#include "main.h"
#include <stdio.h>
#include <limits.h>

int main()
{
	int len1 = _printf("%+d - %+d = %+d\n", 1024, 2048, -1024);
	int len2 = printf("%+d - %+d = %+d\n", 1024, 2048, -1024);
	printf("\n len1 = %d and len2 = %d", len1, len2);
	printf("\n");
	return (0);
}