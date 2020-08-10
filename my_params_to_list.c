/*
** EPITECH PROJECT, 2019
** my_params_to_list.c
** File description:
** my_params_to_list
*/

#include <stdlib.h>
#include "./lib/my/mylist.h"

linked_list_t *my_params_to_list(int ac, char * const *av)
{
    linked_list_t *list = NULL;
    
    for (int i = 0; i < ac; i++) {
        linked_list_t *element;
        element = malloc(sizeof(linked_list_t));
        element->data = av[i];
        element->next = list;
        list = element;
    }
    return (list);
}
