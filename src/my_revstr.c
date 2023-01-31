/*
** EPITECH PROJECT, 2022
** MY_REVSTR
** File description:
** Reverse str
*/

#include "../includes/lib.h"

char *my_revstr(char *str)
{
    char temp;
    int n = my_strlen(str);
    for (int i = 0; i < n / 2; i++) {
        temp = str[i];
        str[i] = str[n - i - 1];
        str[n - i - 1] = temp;
    }
    return str;
}
