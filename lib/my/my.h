/*
** EPITECH PROJECT, 2020
** myh
** File description:
** myh
*/

#include <stdio.h>
#include <SFML/Audio.h>
#include <SFML/Graphics.h>

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

#endif /* MY_H_ */


