/*
** EPITECH PROJECT, 2020
** bombyx
** File description:
** bombyx
*/

#include "../include/my.h"

double do_calcul(double *all)
{
    static double x = 0;
    if (x == 0)
        x = all[0];
    double x_i = 0;
    double a = ((1000 - x) / 1000);

    if (x >= 1000)
        x_i = 0;
    else
        x_i = all[1] * x * a;
    x = x_i;
    return (x_i);
}

void do_with_k(double *all)
{
    double i = 2;
    double x_i = 0;

    printf("%d %.2f\n", 1, all[0]);
    for (; i <= 100; i++) {
        if (x_i >= 1000)
            x_i = 0;
        else
            x_i = do_calcul(all);
        printf("%.f %.2f\n", i, x_i);
    }
}

double do_calcul_with_i(double k, int y, double f)
{
    static double x = 0;
    if (x == 0 || y == 1)
        x = f;
    double x_i = 0;
    double a = ((1000 - x) / 1000);

    x_i = k * x * a;
    x = x_i;
    return (x_i);
}

double do_calcul_with_ii(double *all, double k, int y)
{
    static double x = 0;
    if (x == 0 || y == 1)
        x = all[0];
    double x_i = 0;
    double a = ((1000 - x) / 1000);

    x_i = k * x * a;
    x = x_i;
    return (x_i);
}

void do_with_i(double *all)
{
    double i = 1;
    double x_i = 0;
    double a = all[0];
    int x_j = all[2] - all[1] + 1;

    for (; i <= 4; i += 0.01) {
        for (int o = 1; o < all[1]; o++)
            if (o == 1)
                x_i = do_calcul_with_i(i, 1, a);
            else
                x_i = do_calcul_with_i(i, 0, a);
        all[0] = x_i;
        x_i = (float)x_i;
        printf("%.2f %.2f\n", i, x_i);
        for (int m = x_j; m != 1; m--) {
            if (m == x_j)
                x_i = do_calcul_with_ii(all, i, 1);
            else
                x_i = do_calcul_with_ii(all, i, 0);
            x_i = (float)x_i;
            printf("%.2f %.2f\n", i, x_i);
        }
    }
}

int bombyx(double *all, int ac)
{
    if (ac == 3)
        do_with_k(all);
    else
        do_with_i(all);
}
