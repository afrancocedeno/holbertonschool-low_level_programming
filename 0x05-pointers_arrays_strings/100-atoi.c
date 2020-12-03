#include <stdio.h>

int _atoi(char *s)
{
	/* 48 - 57 ascii */
	int auxiliar_string[1024];
	int i = 0, j = 0, k = 0, a = 0;

	for (; s[i] != '\0'; i++)
	{
		if (s[i] >= 48 && s[i] <= 57)
		{
			if (s[i - 1] == '-')
				a = 1;
			auxiliar_string[j] = s[i];
			j++;
		}
	}
	auxiliar_string[j] = '\0';
	 /*for (i = 0; auxiliar_string[i] != '\0'; i++)
		printf("%c", *(auxiliar_string + i)); */
	for (i = 0; auxiliar_string[i]; i++)
		k = 10 * k + (auxiliar_string[i] - '0');
	if (a == 1)
		k = -k;
	return (k);
}