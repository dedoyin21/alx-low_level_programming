#include "function_pointers.h"

/**
 * print_name - this print name
 * @name: name will be printed
 * @f: pointer to print function
 */
void print_name(char *name, void (*f)(char *))
{
	if (!name || !f)
		return;
	f(name);
}
