/*
** EPITECH PROJECT, 2023
** GLL
** File description:
** Gll prints functions
*/

#include "lib.h"

void print_int(void *integer)
{
    my_printf("%d", *((int *)integer));
}

void print_string(void *string)
{
    my_printf("%s", (char *)string);
}
