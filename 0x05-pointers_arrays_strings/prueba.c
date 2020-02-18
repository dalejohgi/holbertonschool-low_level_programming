#include <stdio.h>
/** El ajá momment del puto mes señores! */
void main(void)
{
	int n = 20;
	int *p = &n;

	printf("%p\n", p); /* Imprime la dirección de n es decir el valor de &n */
	printf("%d\n", ++*p); /** Incrementa el valor de n a 21 */
	printf("%p\n", ++p); /** Incrementa en 4 bytes la dirección de de n  :O  */ 
	printf("%d\n", ++*p); /** Arroja un valor raro, supongo que porque incrementó la posicion, lo que quiere decir que hay un valor desconocido para dicha posicion */

}
