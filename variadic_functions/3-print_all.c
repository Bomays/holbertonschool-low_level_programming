#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"
/**
 * print_all - variadic function that prints strings from different
 * types using switch for converting them fr printing,
 * followed by a new line
 * @format: is a list of types of arguments passed to the function
 * Return: void
 */
void print_all(const char * const format, ...)
{
	va_list arglist;
	int i = 0, arg_one = 1;
	/*first arg initialized to 1 so comma will not be printed before it*/
	char *chain, type;

	va_start(arglist, format);
	while (format && format[i])
	{
		if (!arg_one)/*other arguments will have comma&space printed before*/
		printf(", ");

	type = format[i];
	switch (type)
	{
		case 'c':
			printf("%c", va_arg(arglist, int));
			arg_one = 0;
			break;
		case 'i':
			printf("%d", va_arg(arglist, int));
			arg_one = 0;
			break;
		case 'f':
			printf("%f", va_arg(arglist, double));
			arg_one = 0;
			break;
		case 's':
			chain = va_arg(arglist, char*);
			printf("%s", chain ? chain : "(nil)");
			/* equivalent: printf("%s", chain); if (!chain) printf("(nil)");*/
			arg_one = 0;
			break;
	}
	i++;
	}
	va_end(arglist);
	printf("\n");
}
