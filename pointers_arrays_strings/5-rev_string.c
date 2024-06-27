#include "main.h"
/**
 * rev_string - it reverses the string
 * @s: The string to be reversed
 *
 * len is the string length
 * Return: None
 *
 * _____________________________________________________
 *
 *void rev_string(char *s)
 * {
 *	int start;
 *	int end;
 *	char temp;
 *
 *	for (end = 0; s[end] != '\0'; end++)
 *	{}
 *		// check the lengh til the end of chain \0
 *		// browsing each letter with len++
 *
 *	for (start = 0; start < (end / 2); start++)
 *	{
 *		temp = s[start];
 *		s[start] = s[end - start - 1];
 *		s[end - start - 1] = temp;
 *			//Reverse the string with mirror index
 *	}
 * }
 */
void rev_string(char *s)
{
	int a;
	int len;

	char *begin, *end = s;

	for (a = 0; s[a] != '\0' && s[a + 1] != '\0' ; a++)
		/**Trouve la fin de la chaîne*/
	{
		end++;
	}
	len = a + 1;	/**calcul longueur chaine*/
	begin = s;	/**initialise pointeur au début*/
	for (a = 0; a < len / 2; a++)
	{
		char x;

		x = *end;
		*end = *begin;
		*begin = x;
		begin++;
		end--;
	}
}
