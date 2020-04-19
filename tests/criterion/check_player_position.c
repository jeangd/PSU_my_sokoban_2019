/*
** EPITECH PROJECT, 2019
** criterion
** File description:
** check.c
*/

#include  <criterion/criterion.h>
#include "my.h"

Test(testlib, test_my_isneg)
{
    cr_assert_eq(0, my_isneg(1));
    cr_assert_eq(1, my_isneg(1));
}