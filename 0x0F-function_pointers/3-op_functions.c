#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *op_add - Add a plus b
 *@a: Num1
 *@b: num2
 *Return: a plus b result
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 *op_sub - subtracts a less b
 *@a: num1
 *@b:num2
 *Return: a less b
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 *op_mul - multiplies a for b
 *@a: num1
 *@b: num2
 *Return: a for b
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 *op_div - Divide a by b
 *@a: num1
 *@b: num2
 *Return: a divided by b if success
 */
int op_div(int a, int b)
{
	if (b == 0)
		printf("Error\n");
		exit(100);
	return (a / b);
}
/**
 *op_mod - Modulo operation
 *@a: num1
 *@b: num2
 *Return: modulo
 */
int op_mod(int a, int b)
{
	if (b == 0)
		printf("Error\n");
		exit(100);
	return (a % b);
}
