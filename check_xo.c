/*
** EPITECH PROJECT, 2019
** PSU_my_sokoban_2019
** File description:
** check_xo.c
*/

#include "include/my.h"

int check_xo(soko_t *soko)
{
    soko->nbo = 0;
    soko->nbx = 0;

    for (int d = 0; soko->buffer[d] != '\0'; d++)
        if (soko->buffer[d] == 'O')
            soko->nbo++;
    for (int f = 0; soko->buffer[f] != '\0'; f++)
        if (soko->buffer[f] == 'X')
            soko->nbx++;
    if (soko->nbx != soko->nbo)
        return (84);
}