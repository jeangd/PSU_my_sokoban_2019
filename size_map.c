/*
** EPITECH PROJECT, 2019
** PSU_my_sokoban_2019
** File description:
** sice_map.c
*/

#include "include/my.h"

int size_map(soko_t *soko)
{
    soko->x = 0;
    while (soko->buffer[soko->x] != '\n')
        soko->x++;
}