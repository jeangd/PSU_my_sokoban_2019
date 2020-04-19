/*
** EPITECH PROJECT, 2019
** CPE_BSQ_2019
** File description:
** stat.c
*/

#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <stdlib.h>
#include "include/my.h"

int fs_sta(char const *filepath)
{
    struct stat tab;
    int size = 0;

    stat(filepath, &tab);
    size = tab.st_size;
    return (size);
}