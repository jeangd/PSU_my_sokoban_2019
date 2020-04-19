/*
** EPITECH PROJECT, 2019
** PSU_my_sokoban_2019
** File description:
** check_letter.C
*/

#include "ncurses.h"
#include "include/my.h"

int check_letter(soko_t *soko)
{
    for (int b = 0; soko->buffer[b] != '\0'; b++) {
        if (soko->buffer[b] != '#'
        && soko->buffer[b] != 'P'
        && soko->buffer[b] != 'X'
        && soko->buffer[b] != 'O'
        && soko->buffer[b] != ' '
        && soko->buffer[b] != '\n') {
            endwin();
            return (84);
        }
    }
}