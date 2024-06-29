#include "2-main.h"
/**
 * _strncat - concatenates two strings.
 *
 * This function appends the src string to the dest string,
 * it uses at most n bytes from src and src does not need
 * to be null-terminated if it contains n or more bytes
 *
 * @dest: first string
 * @src: second string
 * @n: number of characters
 *
 * Return: return temp (start of dest)
 */
char *_strncat(char *dest, char *src, int n)
{
	char *temp = dest;/*Initialize temporary ptr to memorize dest start adress*/

	while (*dest)/*Move dest to the end of the chain*/
		dest++;

	while (n > 0 && *src)
	/*Concatenate up to n characters from src to dest*/
	/*n is decremented to count the number of characters to copy*/
	/*superior than 0 or not NULL*/
	{
		*dest++ = *src++;
		n--;
	}

	*dest = '\0';/*Being sure the chain ends with a null character*/
	return (temp);/*Return temp ptr (start of dest chain)*/
}
