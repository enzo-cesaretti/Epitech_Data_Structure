/*
** EPITECH PROJECT, 2022
** MY_STRLEN
** File description:
** Print the length of a str.
*/

int my_strlen(char const *str)
{
    int i;
    for (i = 0; str[i] != '\0'; i++);
    return i;
}
