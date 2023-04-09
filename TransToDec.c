#include <stdio.h>
#include <math.h>
#include "vvod.c"

/**
 * Функция конвертации в десятиричную
 * */

#define N 100

int TransToDec(int a){
    int  k,res = 0;
    char s[N];
    a = vvod(s);
    for(k = 0; k<a; k++){
        if (s[k]=='A' || s[k] == 'a'){
            res = res+ 10*pow(16,a-k-1);
        }
        if (s[k]=='B' || s[k] == 'b'){
            res = res+ 11*pow(16,a-k-1);
        }
        if (s[k]=='C' || s[k] == 'c'){
            res = res+ 12*pow(16,a-k-1);
        }
        if (s[k]=='D' || s[k] == 'd'){
            res = res+ 13*pow(16,a-k-1);
        }
        if (s[k]=='E' || s[k] == 'e'){
            res = res+ 14*pow(16,a-k-1);
        }
        if (s[k]=='F' || s[k] == 'f'){
            res = res+ 15*pow(16,a-k-1);
        }
        if (s[k]=='1'){
            res = res+ 1*pow(16,a-k-1);
        }
        if (s[k]=='2'){
            res = res+ 2*pow(16,a-k-1);
        }
        if (s[k]=='3'){
            res = res+ 3*pow(16,a-k-1);
        }
        if (s[k]=='4'){
            res = res+ 4*pow(16,a-k-1);
        }
        if (s[k]=='5'){
            res = res+ 5*pow(16,a-k-1);
        }
        if (s[k]=='6'){
            res = res+ 6*pow(16,a-k-1);
        }
        if (s[k]=='7'){
            res = res+ 7*pow(16,a-k-1);
        }
        if (s[k]=='8'){
            res = res+ 8*pow(16,a-k-1);
        }
        if (s[k]=='9'){
            res = res+ 9*pow(16,a-k-1);
        }
    }
    puts("1 number");
    printf("%d",res);
    return res;
}
