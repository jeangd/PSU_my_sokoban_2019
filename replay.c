/*
** EPITECH PROJECT, 2019
** PSU_my_sokoban_2019
** File description:
** replay.c
*/

#include <stdlib.h>
#include "include/my.h"

int replay(soko_t *soko)
{
    my_strcpy(soko->buffer, soko->tmp_buffer);
    soko->i = soko->place;
}