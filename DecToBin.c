#include <stdio.h>

/**
 * Функция конвертации из десятичной в двоичную
 * */


#define N 100

int DecToBin( int dec )
{
    char ch1[N];
    int i,j,k=0;
    for(j = 0; (dec % 10) >= 1; ++j){
        ch1[j] = dec % 2;
        dec = dec/2;
    }
    for( i = 0;i<j;i++){
        if ( (i % 2) == 1){
            k = k + ch1[i];
        }
    }
    puts("\n 2 Number");
    printf("%d",k);
}
