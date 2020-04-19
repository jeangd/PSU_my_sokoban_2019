/*
** EPITECH PROJECT, 2019
** PSU_my_sokoban_2019
** File description:
** move_x_down.c
*/

#include "include/my.h"

int move_x_down(soko_t *soko)
{
    if (soko->buffer[soko->i + (2 * soko->x) + 2] == ' ' ||
                            soko->buffer[soko->i + (2 * soko->x) + 2] == 'O') {
        if (soko->buffer[soko->i + (2 * soko->x) + 2] == 'O')
            soko->place_o = soko->i + (2 * soko->x) + 2;
        soko->buffer[soko->i + 1 + soko->x] = 'P';
        soko->buffer[soko->i] = ' ';
        soko->buffer[soko->i + (2 * soko->x) + 2] = 'X';
        soko->i += soko->x + 1;
    }
}