#include "function_pointers.h"
/**
 *print_name - Print name
 *@name: name
 *@f: Pointer to function
 *
 *
 *
 */
void print_name(char *name, void (*f)(char *))
{
	f = *f;
	f(name);
}
