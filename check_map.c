/*
** EPITECH PROJECT, 2019
** PSU_my_sokoban_2019
** File description:
** check_map.c
*/

#include "include/my.h"

int check_map(soko_t *soko)
{
    if (check_p(soko) == 84)
        return (84);
    if (check_xo(soko) == 84)
        return (84);
    if (check_letter(soko) == 84)
        return (84);
}