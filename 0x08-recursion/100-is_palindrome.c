#include "main.h"
#include <string.h>
#include <stdio.h>
/**
 * is_palindrome - detects palindrome
 * @s: string
 *
 * Return: 1 or 0.
 */
int is_palindrome(char *s)
{
	int len;
	int l;
	int r;

	if (s == NULL)
	{
		return (0);
	}
	len = strlen(s);
	if (len == 0)
	{
		return (1);
	}
	l = 0;
	r = (len - 1);
	while (l < r)
	{
		if (s[l] != s[r])
		{
			return (0);
		}
		l++;
		r--;
	}
	return (1);
}
