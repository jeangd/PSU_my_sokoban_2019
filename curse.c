/*
** EPITECH PROJECT, 2019
** PSU_my_sokoban_2019
** File description:
** curse.c
*/

#include <ncurses.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <stdlib.h>
#include "include/my.h"

int curse(soko_t *soko)
{
    initscr();
    keypad(stdscr, TRUE);
    noecho();
    find_p(soko);
    size_map(soko);
    while (soko->clos != 'a') {
        clear();
        if (p_win(soko) == 0) {
            endwin();
            return (0);
        }
        if (p_lose(soko) == 1)
            return (1);
        printw(soko->buffer);
        soko->clos = getch();
        move_p(soko);
        refresh();
    }
    endwin();
}