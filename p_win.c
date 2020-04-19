/*
** EPITECH PROJECT, 2019
** PSU_my_sokoban_2019
** File description:
** p_win.c
*/

#include "include/my.h"

int p_win(soko_t *soko)
{
    soko->vic = 0;
    for (int j = 0; soko->tmp_buffer[j] != '\0'; j++) {
        if (soko->buffer[j] == 'X' && soko->tmp_buffer[j] == 'O')
            soko->vic++;
        if (soko->buffer[j] == ' ' && soko->tmp_buffer[j] == 'O')
            soko->buffer[j] = 'O';
    }
    if (soko->vic == soko->nbo)
        return (0);
}