/*
** EPITECH PROJECT, 2019
** error_case
** File description:
** error_case
*/

#include "../include/my.h"

int error_case(char *ave, int ac, int v)
{
    int i = 1, j = 0, g = 0, k = 0, a = 1, s = 0, q = 0;
    for (; (((ave[j] >= '0' && ave[j] <= '9') || ave[j] == '.' || ave[j] == '-' || ave[j] == '+') && ave[j] != '\0'); j++) {
        (ave[j] == '.') ? k += 1 : k;
        (ave[j] == '-') ? s += 1 : s;
        (ave[j] == '+') ? q += 1: q;
        g++;
    }
    if ((g != strlen(ave)) || ((s == 1) && q == 1) || ((ac == 3 && v == 2) && (k > 1 || s > 1 || q > 1)) || (k >= 1 || s > 1 || q > 1))
        return (84);
    return (0);
}
