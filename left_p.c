/*
** EPITECH PROJECT, 2019
** PSU_my_sokoban_2019
** File description:
** left_p.c
*/

#include "include/my.h"

int left_p(soko_t *soko)
{
    if (soko->buffer[soko->i - 1] != '#') {
        if (soko->buffer[soko->i - 1] == 'X') {
            move_x_left(soko);
        }
        else {
        soko->buffer[soko->i - 1] = 'P';
        soko->buffer[soko->i] = ' ';
        soko->i--;
        }
        if (soko->buffer[soko->place_o] == ' ')
            soko->buffer[soko->place_o] = 'O';
    }
    else
    {
        return (84);
    }
}