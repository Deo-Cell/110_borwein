/*
** EPITECH PROJECT, 2022
** main.c
** File description:
** main.c
*/

#include "../include/110.h"

void process(char **av)
{
    midpoint(atoi(av[1]));
    printf("\n");
    trapezolid(atof(av[1]));
    printf("\n");
    simpson(atof(av[1]));
}

int check_str(char *av)
{
    for (int i = 0; av[i] != '\0'; i++) {
        if (av[i] >= '0' && av[i] <= '9')
            continue;
        else if (av[i] < 0)
            return (84);
        else
            return (84);
    }
}

int check_errors(int ac, char *av)
{
    if (ac != 2)
        return (84);
    if (check_str(av) == 84)
        return (84);
}

int main(int ac, char **av)
{
    if (check_errors(ac, av[1]) == 84)
        return (84);
    else
        process(av);
}
