/*
** EPITECH PROJECT, 2019
** 
** File description:
** my_put_nbr
*/

#include<unistd.h>

void my_putchar(char c)
{
    write(1, &c, 1);
}

int my_put_nbr(int nb)
{
    if (nb < 0) {
        my_putchar('-');
        nb = nb * -1;
    }
    if (nb >= 10) {
        my_put_nbr(nb / 10);
        my_putchar((nb % 10) + '0');
    }
    if (nb < 10)
        my_putchar(nb + '0');
    return nb;
}

int my_strlen(char const *str)
{
    int nbr = 0;
    while (str[nbr] != '\0') {
        nbr++;
    }
    return nbr;
}

int my_putstr(char const *str)
{
    int i=0;
    while (str[i] != '\0') {
        my_putchar(str[i]);
        i++;
    }
}
