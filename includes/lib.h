/*
** EPITECH PROJECT, 2023
** LIB
** File description:
** LIB HEADER
*/

#ifndef LIB
    #define LIB
    #define LINKEDLIST gll

    #include <stdbool.h>
    #include <stdlib.h>

typedef struct s_gll_node {
    void *data;
    struct s_gll_node *next;
} gll_node;

typedef struct s_gll {
    gll_node *head;
    size_t data_size;
} gll;

int my_put_nbr(int nb);
int my_putchar(char c);
int my_putstr(char const *str);
int my_printf(const char *format, ...);
int my_strlen(char const *str);
char *my_revstr(char *str);

// LINKEDLIST
gll *gll_init(size_t data_size);
gll_node *get_node(void *data);
void gll_prepend(gll *list, void *data);
void gll_pop(gll *list);
void gll_print(gll *list, void print(void *));
void print_int(void *integer);
void print_string(void *string);

#endif /* !LIB */
