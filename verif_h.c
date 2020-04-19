/*
** EPITECH PROJECT, 2019
** PSU_my_sokoban_2019
** File description:
** verif_h.c
*/

#include "include/my.h"

void verif_h(void)
{
    my_printf("%s\n", "USAGE");
    my_printf("%s\n", "     ./my_sokoban map");
    my_printf("%s\n", "DESCRIPTION");
    my_printf("%s", "     map  file representing the warehouse map, ");
    my_printf("%s\n%s", "containing '#' for walls,", "          'P'");
    my_printf("%s", " for the player, 'X' for boxes and 'O' for");
    my_printf("%s\n", " storage locations.");
}