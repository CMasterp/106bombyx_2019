/*
** EPITECH PROJECT, 2020
** my.h
** File description:
** my.h
*/

#ifndef _MY_H

#define _MY_H

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int my_strcp(char const *s1, char const *s2);
double do_calcul(double *all);
void do_with_k(double *all);
double do_calcul_with_i(double k, int y, double f);
double do_calcul_with_ii(double *all, double k, int y);
void do_with_i(double *all);
void usage(void);
int my_strcmp(char *, char *);
int my_strlen(const char *);
int error_case(char *ave, int ac, int i);
int bombyx(double *n, int ac);

#endif
