/*
** EPITECH PROJECT, 2019
** PSU_my_sokoban_2019
** File description:
** move_p.c
*/

#include <ncurses.h>
#include "include/my.h"

void move_p(soko_t *soko)
{
    if (soko->clos == KEY_UP)
        up_p(soko);
    if (soko->clos == KEY_DOWN)
        down_p(soko);
    if (soko->clos == KEY_RIGHT)
        right_p(soko);
    if (soko->clos == KEY_LEFT)
        left_p(soko);
    if (soko->clos == 32)
        replay(soko);
    if (soko->buffer[soko->place_o] == ' ')
        soko->buffer[soko->place_o] = 'O';
}