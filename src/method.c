/*
** EPITECH PROJECT, 2022
** meth.c
** File description:
** meth.c
*/

#include "../include/110.h"

double midpoint(int n)
{
    double res = 0.0;

    for (int k = 0; k < 10000; k++)
        res += 0.5 * borw(n, ((k + 0.5) / 2.0));
    printf("Midpoint:\n");
    disp(res, n);
}

double trapezolid(double n)
{

    double res = 0;
    double tmp = 0;

    for (double i = 0, j = 0.5; j <= 5000; i += 0.5, j += 0.5) {
        tmp = borw(n, i) + borw(n, j);
        tmp *= ((j - i) / 2);
        res += tmp;
    }
    printf("Trapezoidal:\n");
    disp(res, n);
}

double simpson(double n)
{
    double res = 0;
    double tmp = 0;

    for (double i = 0, j = 0.5; j <= 5000; i += 0.5, j += 0.5) {
        tmp = borw(n, i) + borw(n, j) + (4 * borw(n, (i + j) / 2));
        tmp *= ((j - i) / 6);
        res += tmp;
    }

    printf("Simpson:\n");
    disp(res, n);
}
