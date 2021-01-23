/*
** EPITECH PROJECT, 2020
** Untitled (Workspace)
** File description:
** Untitled-2
*/

#include "my.h"

void my_draw_line(buff_t *buff, sfVector2i point_a, sfVector2i point_b)
{
    int a;
    int b;
    int c[] = {point_a.x, point_a.y};
    int choice;
    int choice2;
    if (point_a.x == point_b.x) {
        choice = point_b.y;
        if (point_a.y > point_b.y)
            c[1] = point_b.y, choice = point_a.y;
        while (c[1] != choice) {
            my_put_pixel(buff, c[0], c[1], sfWhite);
            c[1] += 1;
        }
    }
    else if (point_a.x > point_b.x) {
        a = (point_a.y - point_b.y) / (point_a.x - point_b.x);
        b = point_a.y - (a * point_a.x);
        while (c[0] != point_b.x && c[1] != point_b.y) {
            c[1] = a * c[0] + b;
            my_put_pixel(buff, c[0], c[1], sfWhite);
            c[0] += 1;
        }
    }
    else {
        a = (point_a.y - point_b.y) / (point_a.x - point_b.x);
        b = point_a.y - (a * point_a.x);
        while (c[0] != point_b.x && c[1] != point_b.y) {
            c[1] = a * c[0] + b;
            my_put_pixel(buff, c[0], c[1], sfWhite);
            c[0] -= 1;
        }
    }
    return;
}
