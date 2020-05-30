#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always EXIT_SUCCESS.
 */
int main(void)
{
    hash_table_t *ht;
    int code = 4;

    ht = hash_table_create(1024);
    code = hash_table_set(ht, "betty", "holberton");
    printf("%d\n", code);
    return (EXIT_SUCCESS);
}
