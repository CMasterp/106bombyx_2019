/*
** EPITECH PROJECT, 2020
** main
** File description:
** main
*/

#include "../include/my.h"

void usage(void)
{
    printf("USAGE\n");
    printf("    ./106bombyx n [k | i0 i1]\n\nDESCRIPTION\n");
    printf("    n       number of first generation individuals\n");
    printf("    k       growth rate from 1 to 4\n");
    printf("    i0      initial generation (included)\n");
    printf("    i1      final generation (included)\n");
}

int control(char **av, int ac)
{
    double n = atof(av[1]), k = atof(av[2]), i = 1, j = 1;
    int a = 0;

    if (ac == 4) {
        j = atof(av[2]);
        i = atof(av[3]);
    }
    for (int i = 1; i < ac; i++)
        if (error_case(av[i], ac, i) == 84)
            a++;
    a += (n < 0) ? 1 : 0;
    a += (ac == 3 && (k < 1 || k > 4)) ? 1 : 0;
    a += (ac == 4 && (j < 1 || i < 1 || (i < j))) ? 1 : 0;
    return (a);
}

int main(int ac, char **av)
{
    double *all = malloc(sizeof(double) * ac);
    if ((ac == 2) && (strcmp(av[1], "-h") == 0))
        usage();
    else if ((ac == 4 || ac == 3) && (control(av, ac) == 0)) {
        for (int i = 0; i < (ac - 1); i++)
            all[i] = atof(av[i + 1]);
        bombyx(all, ac);
    }
    else {
        return (84);
    }
}
