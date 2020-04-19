/*
** EPITECH PROJECT, 2019
** PSU_my_sokoban_2019
** File description:
** move_x_left.c
*/

#include "include/my.h"

int move_x_left(soko_t *soko)
{
    if (soko->buffer[soko->i - 2] == ' ' || soko->buffer[soko->i - 2] == 'O') {
        if (soko->buffer[soko->i + 2] == 'O')
            soko->place_o = soko->i - 2;
        soko->buffer[soko->i - 1] = 'P';
        soko->buffer[soko->i] = ' ';
        soko->buffer[soko->i - 2] = 'X';
        soko->i--;
    }
}