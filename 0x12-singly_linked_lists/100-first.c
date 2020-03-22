#include <stdio.h>
void dofirst(void) __attribute__ ((constructor));
/**
 *dofirst - Print a sentence
 *
 */
void dofirst(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
