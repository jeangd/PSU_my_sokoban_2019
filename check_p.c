/*
** EPITECH PROJECT, 2019
** PSU_my_sokoban_2019
** File description:
** check_p.c
*/

#include "include/my.h"

int check_p(soko_t *soko)
{
    int a = 0;

    for (int b = 0; soko->buffer[b] != '\0'; b++)
        if (soko->buffer[b] == 'P')
            a++;
    if (a != 1)
        return (84);
}