#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

int put_char(char c)
{
    write(0, &c, 1);
}

int star1(void)
{
    int i;

    for (i = 0; i < 3; i++)
        put_char(' ');
    put_char('*');
    put_char('\n');
    for (i = 0; i < 3; i++)
        put_char('*');
    put_char(' ');
    for (i = 4; i < 7; i++)
        put_char('*');
    put_char('\n');
    put_char(' ');
    put_char('*');
    for (i = 2; i < 5; i++)
        put_char(' ');
    put_char('*');
    put_char('\n');
    for (i = 0; i < 3; i++)
        put_char('*');
    put_char(' ');
    for (i = 4; i < 7; i++)
        put_char('*');
    put_char('\n');
    for (i = 0; i < 3; i++)
        put_char(' ');
    put_char('*');
    put_char('\n');
}

int print_star_pair(int size)
{
    int row = 2;
    int width;
    int i;
    int j = 1;
    int k = 1;

    width = 2 * ((size * 2 - 1) + 2) + 2 * (size - 1) - 1;
    textcolor(RED);
    for (i = 0; i < (width / 2); i++)
        put_char(' ');
    put_char('*');
    put_char('\n');
    i = 0;
    while (row <= (size - 1)) {
        while (i < (width / 2 - j)) {
            put_char(' ');
            i++;
        }
        put_char('*');
        i++;
        while (i < (width / 2 + j)) {
            put_char(' ');
            i++;
        }
        put_char('*');
        put_char('\n');
        j++;
        row++;
        i = 0;
    }
    while (i < (width / 2 - (j - 1))) {
        put_char('*');
        i++;
    }
    while (i < (width / 2 + j)) {
        put_char(' ');
        i++;
    }
    while (i < width) {
        put_char('*');
        i++;
    }
    put_char('\n');
    row = 1;
    i = 0;
    while (row <= (size - 1)) {
        while (i < k) {
            put_char(' ');
            i++;
        }
        put_char('*');
        while (i < (width - (k + 1))) {
            put_char(' ');
            i++;
        }
        put_char('*');
        put_char('\n');
        k++;
        i = 0;
        row++;
    }
    row = 2;
    k = k - 2;
    while (row <= (size - 1)) {
        while (i < k) {
            put_char(' ');
            i++;
        }
        put_char('*');
        while (i < (width - (k + 1))) {
            put_char(' ');
            i++;
        }
        put_char('*');
        put_char('\n');
        k--;
        i = 0;
        row++;
    }
    while (i < (width / 2 - (j - 1))) {
        put_char('*');
        i++;
    }
    while (i < (width / 2 + j)) {
        put_char(' ');
        i++;
    }
    while (i < width) {
        put_char('*');
        i++;
    }
    put_char('\n');
    i = 0;
    row = 2;
    j--;
    while (row <= (size - 1)) {
        while (i < (width / 2 - j)) {
            put_char(' ');
            i++;
        }
        put_char('*');
        i++;
        while (i < (width / 2 + j)) {
            put_char(' ');
            i++;
        }
        put_char('*');
        put_char('\n');
        j--;
        row++;
        i = 0;
    }
    for (i = 0; i < (width / 2); i++)
        put_char(' ');
    put_char('*');
    put_char('\n');
}

int print_star_impair(int size)
{
    int row = 2;
    int width;
    int i;
    int j = 1;
    int k = 1;

    width = 2 * ((size * 2 - 1) + 2) + size * 2 - 3;
    for (i = 0; i < (width / 2); i++)
        put_char(' ');
    put_char('*');
    put_char('\n');
    i = 0;
    while (row <= size) {
        while (i < (width / 2 - j)) {
            put_char(' ');
            i++;
        }
        put_char('*');
        i++;
        while (i < (width / 2 + j)) {
            put_char(' ');
            i++;
        }
        put_char('*');
        put_char('\n');
        j++;
        row++;
        i = 0;
    }
    while (i < (width / 2 - (j - 2))) {
        put_char('*');
        i++;
    }
    while (i < (width / 2 + (j - 1))) {
        put_char(' ');
        i++;
    }
    while (i < width) {
        put_char('*');
        i++;
    }
    put_char('\n');
    row = 1;
    i = 0;
    while (row <= size) {
        while (i < k) {
            put_char(' ');
            i++;
        }
        put_char('*');
        while (i < (width - (k + 1))) {
            put_char(' ');
            i++;
        }
        put_char('*');
        put_char('\n');
        k++;
        i = 0;
        row++;
    }
    row = 2;
    k = k - 2;
    while (row <= size) {
        while (i < k) {
            put_char(' ');
            i++;
        }
        put_char('*');
        while (i < (width - (k + 1))) {
            put_char(' ');
            i++;
        }
        put_char('*');
        put_char('\n');
        k--;
        i = 0;
        row++;
    }
    while (i < (width / 2 - (j - 2))) {
        put_char('*');
        i++;
    }
    while (i < (width / 2 + (j - 1))) {
        put_char(' ');
        i++;
    }
    while (i < width) {
        put_char('*');
        i++;
    }
    row = 2;
    i = 0;
    j--;
    put_char('\n');
    while (row <= size) {
        while (i < (width / 2 - j)) {
            put_char(' ');
            i++;
        }
        put_char('*');
        i++;
        while (i < (width / 2 + j)) {
            put_char(' ');
            i++;
        }
        put_char('*');
        put_char('\n');
        j--;
        row++;
        i = 0;
    }
    for (i = 0; i < (width / 2); i++)
        put_char(' ');
    put_char('*');
    put_char('\n');
}

int main(int ac, char **av)
{
    int size;
    size = atoi(av[1]);
    if (size == 0)
        return 0;
    if (size == 1) {
        star1();
        return 0;
    }
    if (size % 2 == 0)
        print_star_pair(size);
    else
        print_star_impair(size);
    return 0;
}