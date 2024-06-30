#include "2-main.h"
/**
 * cap_string - it changes all lowercase letters of a string to uppercase
 *
 * @s: characters
 *
 * Return: return at the begin of a string
 */
char *cap_string(char *s)
{
	char *start = s; /* same as the declaration: char *start; start = s;*/
	int neword = 1;

	while (*s)
	{
		if (neword && *s >= 'a' && *s <= 'z')
		{
			*s = *s - ('a' - 'A');
			neword = 0;
		}
		else if (*s == ' ' || *s == '\t' || *s == '\n' || *s == ',' ||
			*s == ';' || *s == '.' || *s == '!' || *s == '?' ||
			*s == '"' || *s == '(' || *s == ')' || *s == '{' || *s == '}')
		{
			neword = 1;
		}
		else
		{
			neword = 0;/*this else condition to be sure that only*/
				    /* the first letter of the new word will be in uppercase*/
				    /* that after an output error of the checker : the second*/
				    /* letter was in uppercase too*/
		}
		s++;
	}
	return (start);
}
