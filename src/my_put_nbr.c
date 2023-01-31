/*
** EPITECH PROJECT, 2022
** MY_PUT_NBR
** File description:
** Print a number
*/

#include "../includes/lib.h"

int my_put_nbr(int nb)
{
    if (nb >= 0 && nb < 10) my_putchar(nb + '0');
    else if (nb < 0) {
        my_putchar('-');
        my_put_nbr(nb * (-1));
    } else {
        my_put_nbr(nb / 10);
        my_put_nbr(nb % 10);
    }
}
