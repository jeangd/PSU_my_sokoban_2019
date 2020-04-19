/*
** EPITECH PROJECT, 2019
** CPool_Day07_2019
** File description:
** my.h
*/

#include <stddef.h>
#include <stdarg.h>
#ifndef my_h
#define my_h

void my_putchar(char c);
int my_isneg (int nb);
int my_put_nbr (int nb);
void my_swap(int *a, int *b);
int my_putstr(char const *str);
int my_strlen(char const *str);
int my_getnbr(char const *str);
void my_sort_int_array(int *tab, int size);
int my_compute_power_rec(int nb, int power);
int my_compute_square_root(int nb);
int my_is_prime(int nb);
int my_find_prime_sup(int nb);
char *my_strcpy(char *dest, char const *src);
char *my_strncpy(char *dest, char const *src, int n);
char *my_revstr(char *str);
char *my_strupcase(char *str);
char *my_strstr(char *str, char const *to_find);
int my_strcmp(char const *s1, char const *s2);
int my_strncmp(char const *s1, char const *s2, int n);
char *my_strupcase(char *str);
char *my_strlowcase(char *str);
char *my_strcapitalize(char *str);
int my_str_isalpha(char const *str);
int my_str_isnum(char const *str);
int my_str_islower(char const *str);
int my_str_isupper(char const *str);
int my_str_isprintable(char const *str);
int my_showstr(char const *str);
int my_showmem(char const *str, int size);
char *my_strcat(char *dest, char const *src);
char *my_strncat(char *dest, char const *src, int nb);
int absolue(int x);
void my_printf(char *str, ...);
void my_printfchar(va_list *ap);
void my_printfstr(va_list *ap);
void my_printfnbr(va_list *ap);
void my_printfpercent(va_list *ap);
int my_put_nbruns(unsigned n);
void my_printfuns(va_list *ap);
void my_put_octal(unsigned int n);
void my_printfoctal(va_list *ap);
void my_put_hexa(unsigned int n);
void my_printfhexa(va_list *ap);
void my_put_caps_hexa(unsigned int n);
void my_printfcaps_hexa(va_list *ap);
void my_put_bin(unsigned int n);
void my_printfbin(va_list *ap);
void my_putstr_unprintable(char const *str);
void my_printf_unprintable(va_list *ap);
void my_printfpoint(va_list *ap);
void verif_h(void);
int fs_sta(char const *filepath);

typedef struct soko_s
{
    int fd;
    int size;
    int clos;
    char *buffer;
    int place;
    int i;
    int x;
    int y;
    int place_o;
    char *tmp_buffer;
    int vic;
    int nbo;
    int nbx;
    int lose;
} soko_t;

int curse(soko_t *soko);
void find_p(soko_t *soko);
void move_p(soko_t *soko);
int left_p(soko_t *soko);
int right_p(soko_t *soko);
int up_p(soko_t *soko);
int down_p(soko_t *soko);
int size_map(soko_t *soko);
int replay(soko_t *soko);
int move_x_up(soko_t *soko);
int move_x_down_o(soko_t *soko);
int move_x_down(soko_t *soko);
int move_x_left(soko_t *soko);
int move_x_right(soko_t *soko);
int move_x_up_o(soko_t *soko);
int check_map(soko_t *soko);
int check_p(soko_t *soko);
int check_xo(soko_t *soko);
int p_win(soko_t *soko);
int p_lose(soko_t *soko);

#endif /* my.h */