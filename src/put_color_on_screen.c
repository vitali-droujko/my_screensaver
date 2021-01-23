/*
** EPITECH PROJECT, 2020
** Untitled (Workspace)
** File description:
** put color
*/

#include "my.h"

void PC(unsigned int point_ax, unsigned int point_ay, buff_t *buff, sfColor a)
{
    for (int i = 0; i < 20; i++)
        PS(point_ax, point_ay, buff, a);
    return;
}