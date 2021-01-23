/*
** EPITECH PROJECT, 2020
** Untitled (Workspace)
** File description:
** putpixel
*/

#include "my.h"

void my_put_pixel(buff_t *buff, unsigned int x, unsigned int y, sfColor color)
{
	int n = ((buff->x * 4) * y) + (x * 4);

    buff->pixel[n] = color.r;
    buff->pixel[n+1] = color.g;
    buff->pixel[n+2] = color.b;
    buff->pixel[n+3] = color.a;
}