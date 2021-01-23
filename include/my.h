/*
** EPITECH PROJECT, 2020
** Untitled (Workspace)
** File description:
** my.h
*/

#include <stdio.h>
#include <SFML/Audio.h>
#include <SFML/Graphics.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdbool.h>

#ifndef MY_H_ 
#define MY_H_ 

typedef struct buff_s
{
	unsigned int x;
	unsigned int y;
	sfUint8 *pixel;
}	buff_t;

int my_compute_power_rec(int, int);
int my_find_prime_sup(int);
int my_compute_square_root(int);
int my_getnbr(char *);
int my_isneg(int);
int my_is_prime(int);
void my_putchar(char);
int my_put_nbr(int);
int my_putstr(char const *);
char *my_revstr(char *);
int my_showmem(char *, int);
int my_showstr(char *);
char *my_strcat(char *, char  const *);
void my_sort_int_array(int *, int);
char *my_strcapitalize(char *);
int my_strcmp(char *, char *);
char *my_strcpy(char *, char *);
int my_str_isalpha(char *);
int my_str_islower(char *);
int my_str_isnum(char *);
int my_str_isprintable(char *);
int my_str_isupper(char *);
int my_strlen(char *);
char *my_strlowcase(char *);
char *my_strncat(char *, char *, int);
int my_strncmp(char *, char *, int);
char *my_strncpy(char *, char *, int);
char *my_strstr(char *, char *);
char *my_strupcase(char *);
void my_swap(int *, int *);
char *my_strdup(char const *);
int my_pow(int, int);
void my_swapmodifa(int *, int *);
char lettera(int);
void my_draw_line(buff_t *buff, sfVector2i point_a, sfVector2i point_b);
buff_t *init_buff(unsigned int x, unsigned int y);
void my_put_pixel(buff_t *buff, unsigned int x, unsigned int y, sfColor color);
void PS(unsigned int point_ax, unsigned int point_ay, buff_t *buff, sfColor a);
void PC(unsigned int point_ax, unsigned int point_ay, buff_t *buff, sfColor a);
int screen1(void);
int screen2(void);
int screen3(void);
int screen4(void);
int screen5(void);

#define MODE sfVideoMode mode = {800, 600, 32}
#define WINDOW (window = sfRenderWindow_create(mode, "SFML window", sfResize | sfClose, NULL))
#define IMAGE (image = sfTexture_createFromFile("epitech.png", NULL))
#define TEXTURE (texture = sfTexture_create(800, 600))
#define SPRITE (sprite = sfSprite_create())
#define IMG (img = sfSprite_create())
#define SET_TEXTURE (sfSprite_setTexture(sprite, texture, sfTrue))
#define SET_IMAGE (sfSprite_setTexture(img, image, sfTrue))
#define POS_IMAGE (sfSprite_setPosition(img, pos))
#define FREE_STRUCT (free_struct(buff))
#define KILL_WINDOW (sfRenderWindow_destroy(window))
#define KILL_SPRITE (sfSprite_destroy(sprite))
#define KILL_SPRITE2 (sfSprite_destroy(img))
#define KILL_TEXT (sfTexture_destroy(texture))
#define KILL_TEXT2 (sfTexture_destroy(image))
#define DISP_WINDOW (sfRenderWindow_display(window))
#define DRAW_IMAGE (sfRenderWindow_drawSprite(window, img, NULL))
#define DRAW_TEXTURE (sfRenderWindow_drawSprite(window, sprite, NULL))
#define UPDATE_IMAGE (sfTexture_updateFromPixels(image, buff->pixel, 3, 50, 0, 0))
#define UPDATE_TEXTURE (sfTexture_updateFromPixels(texture, buff->pixel, 800, 600, 0, 0))
#define RAND_GREEN (PC(point_ax, point_ay, buff, sfGreen))
#define RAND_BLUE (PC(point_ax, point_ay, buff, sfBlue))
#define RAND_WHITE (PC(point_ax, point_ay, buff, sfWhite))
#define RAND_RED (PC(point_ax, point_ay, buff, sfRed))
#define LIMIT (sfRenderWindow_setFramerateLimit(window, 30))
#define FLAG_H av[1][0] == '-' && av[1][1] == 'h' && av[1][2] == '\0'
#define FLAG_D av[1][0] == '-' && av[1][1] == 'd' && av[1][2] == '\0'
#define BPP 32
#define ERROR return(84)

#endif /* MY_H_ */


