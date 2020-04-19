/*
** EPITECH PROJECT, 2019
** PSU_my_sokoban_2019
** File description:
** p_lose.c
*/

#include <ncurses.h>
#include "include/my.h"

int p_lose(soko_t *soko)
{
    soko->lose = 0;
    int line = soko->x + 1;

    for (int z = 0; soko->buffer[z] != '\0'; z++) {
        if (soko->buffer[z] == 'X') {
            if (soko->buffer[z + 1] == '#' && soko->buffer[z + line] == '#')
                soko->lose++;
            if (soko->buffer[z + 1] == '#' && soko->buffer[z - line] == '#')
                soko->lose++;
            if (soko->buffer[z - 1] == '#' && soko->buffer[z + line] == '#')
                soko->lose++;
            if (soko->buffer[z - 1] == '#' && soko->buffer[z - line] == '#')
                soko->lose++;
        }
        if (soko->lose == soko->nbx) {
            endwin();
            return (1);
        }
    }
}