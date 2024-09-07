#include <stdio.h>

int main(void)
{
	char a[100];

	gets(a);

	int i = 0;

	while (a[i] != NULL)
	{
		i++;
	}

	printf("%d", i);

	return 0;
}

