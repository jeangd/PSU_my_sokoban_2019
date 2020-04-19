/*
** EPITECH PROJECT, 2019
** PSU_mu_popup_2019
** File description:
** main.c
*/

#include <ncurses.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <stdlib.h>
#include "include/my.h"

int main(int ac, char **av)
{
    soko_t *soko = malloc(sizeof(soko_t));

    soko->fd = open(av[1], O_RDONLY);
    soko->size = fs_sta(av[1]);
    soko->clos = 0;
    soko->buffer = malloc(sizeof(char) * (soko->size + 1));
    soko->tmp_buffer = malloc(sizeof(char) * (soko->size + 1));
    if (ac != 2)
        return (84);
    if (av[1][0] == '-' && av[1][1] == 'h') {
        verif_h();
        return (0);
    }
    read(soko->fd, soko->buffer, soko->size + 1);
    my_strcpy(soko->tmp_buffer, soko->buffer);
    if (check_map(soko) == 84)
        return (84);
    curse(soko);
    return (0);
}
