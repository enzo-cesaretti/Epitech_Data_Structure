/*
** EPITECH PROJECT, 2022
** MY_PUTCHAR
** File description:
** Print char
*/

#include <unistd.h>
#include "../includes/lib.h"

int my_putchar(char c)
{
    write(1, &c, 1);
    return 0;
}
