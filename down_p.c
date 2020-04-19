/*
** EPITECH PROJECT, 2019
** PSU_my_sokoban_2019
** File description:
** down_p.c
*/

#include "include/my.h"

int down_p(soko_t *soko)
{
    if (soko->buffer[soko->i + 1 + soko->x] != '#') {
        if (soko->buffer[soko->i + 1 + soko->x] == 'X') {
            move_x_down(soko);
        }
        else {
            soko->buffer[soko->i + 1 + soko->x] = 'P';
            soko->buffer[soko->i] = ' ';
            soko->i += soko->x + 1;
        }
        if (soko->buffer[soko->place_o] == ' ')
            soko->buffer[soko->place_o] = 'O';
    }
    else {
        return (84);
    }
}