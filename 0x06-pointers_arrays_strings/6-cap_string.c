#include "main.h"

/**
  * cap_string - capitalizes all words of a string
  *
  * @p: pointer to char
  *
  * Return: *str
  */

char *cap_string(char *p)
{
	int i, j;
	char delimeters[] = " \t\n';.!?\"(){}";

	for (i = 0; p[i] != '\0'; i++)
	{
		if (p[0] >= 97 && p[0] <= 122)
		{
			p[0] = p[0] - 32;
		}
		for (j = 0; delimeters[j] != '\0'; j++)
			if (p[i] == delimeters[j] && p[i + 1] >= 97 && p[i + 1] <= 122) p[i + 1] = p[i + 1] - 32;
	}
	return (p);
}
