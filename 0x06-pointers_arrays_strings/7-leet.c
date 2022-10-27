#include "main.h"

/**
  *leet - encodes a string
  *
  *@str: string
  *
  *Return: a pointer to a char
  */

char *leet(char *str)
{
	int i, j;
	char letter[] = {'a', 'e', 'o', 't', 'l'};
	char code[] = {'4', '3', '0', '7', '1'};

	i = 0;
	while (str[i] != '\0')
	{
		for (j = 0; j < (int)sizeof(letter); j++)
		{
			if (str[i] == letter[j] || str[i] == letter[j] - 32)
			{
				str[i] = code[j];
			}
		}
		i++;
	}
	return (str);
}
