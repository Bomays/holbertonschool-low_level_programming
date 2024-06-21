#include "main.h"
                                                                                            
/**
 * int _islower(int c) - Check description
 * Description: it checks for lowercase character
 * Return: 0
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		{
		return 1;
		}
	else
	{
		return 0;
	}
}
