/*
** EPITECH PROJECT, 2019
** PSU_my_sokoban_2019
** File description:
** find_p.c
*/

#include "include/my.h"

void find_p(soko_t *soko)
{
    while (soko->buffer[soko->i] && soko->buffer[soko->i] != 'P') {
        soko->i++;
    }
    if (soko->buffer[soko->i] == 'P')
            soko->place = soko->i;
}