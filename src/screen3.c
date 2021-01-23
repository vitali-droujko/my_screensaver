/*
** EPITECH PROJECT, 2020
** Project Name
** File description:
** first screen saver
*/

#include "my.h"

static void free_struct(buff_t *buff)
{
    free(buff->pixel);
    free(buff);
    return;
}

int screen3(void)
{
    buff_t *buff;
    buff = init_buff(800, 600);
 	sfVideoMode mode = {800, 600, 32};
    sfRenderWindow* window; 
    sfTexture *texture, *image;
    sfSprite *sprite, *img;
    sfEvent event;
    sfVector2f pos = {85.0, 185.5};
    unsigned int point_ax, point_ay;
    WINDOW, IMAGE, TEXTURE, SPRITE, IMG;
    SET_TEXTURE, SET_IMAGE, POS_IMAGE, LIMIT;
    if (!(window && texture && image)) return 84;
    while (sfRenderWindow_isOpen(window)) {
        while (sfRenderWindow_pollEvent(window, &event))
            (event.type == sfEvtClosed) && (sfRenderWindow_close(window), 0);
        RAND_RED, RAND_RED, RAND_RED, RAND_RED, UPDATE_TEXTURE,\
        UPDATE_IMAGE, DRAW_TEXTURE, DRAW_IMAGE, DISP_WINDOW;
    } FREE_STRUCT, KILL_TEXT2, KILL_WINDOW, KILL_SPRITE, KILL_TEXT;
    return 0;
}