#include "2-main.h"
/**
 * leet - encode string in 1337 langage
 *
 * @s: character chain to encode
 *
 * Return: return s the begining of the chain encoded
 */
char *leet(char *s)
{
	char lowercase[] = "aeotl";
	char uppercase[] = "AEOTL";
	char leets[] = "43071";



	char *ptr = s;

	int i;

	while (*ptr)
	{
		for (i = 0; leets[i]; i++)
		{
			if (*ptr == lowercase[i] || *ptr == uppercase[i])
				*ptr = leets[i];
		}
		ptr++;
	}
	return (s);
}
