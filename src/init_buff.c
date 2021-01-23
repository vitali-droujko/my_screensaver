/*
** EPITECH PROJECT, 2020
** Untitled (Workspace)
** File description:
** Untitled-1
*/

#include "my.h"

buff_t *init_buff(unsigned int x, unsigned int y)
{
    buff_t *buff = malloc(sizeof(buff_t));

    buff->x = x;
    buff->y = y;
    buff->pixel = malloc(sizeof(sfUint8) *(x*y*BPP/8));
    return(buff);
}