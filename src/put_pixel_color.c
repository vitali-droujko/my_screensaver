/*
** EPITECH PROJECT, 2020
** Untitled (Workspace)
** File description:
** put color
*/

#include "my.h"

void PS(unsigned int point_ax, unsigned int point_ay, buff_t *buff, sfColor a)   
{
    int r = rand();
    int j = rand();

    point_ax = r % 798;
    point_ay = j % 598;
    my_put_pixel(buff, point_ax, point_ay, a);
    my_put_pixel(buff, point_ax+1, point_ay, a);
    my_put_pixel(buff, point_ax, point_ay+1, a);
    my_put_pixel(buff, point_ax+2, point_ay, a);
    my_put_pixel(buff, point_ax, point_ay+2, a);
    r = rand();
    j = rand();
    point_ax = r % 798;
    point_ay = j % 598;
    my_put_pixel(buff, point_ax, point_ay, a);
    my_put_pixel(buff, point_ax+1, point_ay, a);
    my_put_pixel(buff, point_ax, point_ay+1, a);
    my_put_pixel(buff, point_ax+2, point_ay, a);
    my_put_pixel(buff, point_ax, point_ay+2, a);
    return;
}
