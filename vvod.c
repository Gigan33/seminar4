#include <stdio.h>

int vvod(char a[]) {
    int ch, i;
    for(i = 0; (ch = getchar()) != '\n' && ch != EOF; i++)
        a[i] = ch;
    return i;
}
