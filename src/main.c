/*
** EPITECH PROJECT, 2020
** Untitled (Workspace)
** File description:
** Untitled-2
*/

#include "my.h"
#include "pointer.h"

void usage(void)
{
    my_putstr("animation rendering in a CSFML window.\n\n");
    my_putstr("USAGE\n");
    my_putstr(" ./my_screensaver [OPTIONS] animation_idn\n");
    my_putstr("  animation_id ID of the animation to process \
(between 1 and 20).\n\n");
    my_putstr("OPTIONS\n");
    my_putstr(" -d print the description of all the animations and quit.\n");
    my_putstr(" -h print the usage and quit.\n\n");
    my_putstr("USER INTERACTIONS\n");
    my_putstr(" LEFT_ARROW switch to the previous animation.\n");
    my_putstr(" RIGHT_ARROW switch to the next animation.\n");
    return;
}

void option(void)
{
    my_putstr("1: epitech in blue\n");
    my_putstr("2: epitech in green\n");
    my_putstr("3: epitech in red\n");
    my_putstr("4: epitech in white\n");
    my_putstr("5: epitech mixt\n");
    my_putstr("6: move square & move crown\n");
    my_putstr("7: fractale\n");
    return;
}

void error(int i)
{
    switch (i) {
        case 0:
            usage();
            break;
        case 1:
            option();
            break;
        case 2:
            write(2, "Not enought arguments\n", 22);
            break;
        case 3:
            write(2, "./my_screensaver: bad arguments: \
0 given but 1 is required\nretry with -h\n", 74);
            break;
        default:
            break;
    }
}

int manager(char **av, int ac)
{
    if (ac == 1) {
        error(3);
        ERROR;
    } if (ac != 2) {
        error(2);
        ERROR;
    } if (FLAG_H) {
        error(0);
        ERROR;
    } if (FLAG_D) {
        error(1);
        ERROR;
    } if (my_strlen(av[1]) > 2 || av[1][0] > '9' || av[1][0] < '0') {
        error(3);
        ERROR;
    } return 0;
}

int main(int ac, char **av)
{
    int index;
    int check = manager(av, ac);
    if (check == 0) {
        index = my_getnbr(av[1]);
        if (index > 5 || index < 1) {
            error(3);
            return 84;
        }
        (*screen[index])();
    } else {
        ERROR;
    }
    return 0;
}