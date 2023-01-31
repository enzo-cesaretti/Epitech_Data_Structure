/*
** EPITECH PROJECT, 2023
** GLL
** File description:
** Generic Linked List
*/

#include "lib.h"
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

gll *gll_init(size_t data_size)
{
    gll *list = malloc(sizeof(gll));
    list->head = NULL;
    list->data_size = data_size;
    return list;
}

gll_node *get_node(void *data)
{
    gll_node *node = malloc(sizeof(gll_node));
    node->data = data;
    node->next = NULL;
    return node;
}

void gll_prepend(gll *list, void *data)
{
    gll_node *node = get_node(data);
    if (list->head == NULL) {
        list->head = node;
        return;
    }
    node->next = list->head;
    list->head = node;
}

void gll_pop(gll *list)
{
    if (list->head == NULL)
        return;
    gll_node *node = list->head;
    list->head = node->next;
    node->next = NULL;
    free(node);
}

void gll_print(gll *list, void print(void *))
{
    if (list->head == NULL) {
        my_printf("[]\n");
        return;
    }
    gll_node *current = list->head;
    my_printf("[");
    while (current) {
        print(current->data);
        if (current->next) my_printf(", ");
        current = current->next;
    }
    my_printf("]\n");
}
