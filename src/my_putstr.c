/*
** EPITECH PROJECT, 2022
** MY_PUTSTR
** File description:
** Print STR give as parameter.
*/

#include "../includes/lib.h"

int my_putstr(char const *str)
{
    for (int i = 0; str[i] != '\0'; i++) {
        my_putchar(str[i]);
    }
}
