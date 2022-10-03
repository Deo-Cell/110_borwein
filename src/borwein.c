/*
** EPITECH PROJECT, 2022
** borwein.c
** File description:
** borwein.c
*/

#include "../include/110.h"

void disp(double res, int n)
{
    double diff = (res - (M_PI / 2));

    printf("I%d = %.10f\n", n, res);
    if (diff < 0)
        printf("diff = %.10f\n", fabs(diff));
    else
        printf("diff = %.10f\n", diff);
}

double borw(double n, double x)
{
    int z = 0;
    double fin = 1.0;

    if (x == 0)
        return (1);

    for (z = 0; z < n + 1; z++) {
        if (z != 0) {
            fin *= sin(x / (2 * z + 1)) / (x / (2 * z + 1));
        }
        else
            fin = sin(x / (2 * z + 1)) / (x / (2 * z + 1));
    }
    return (fin);
}
