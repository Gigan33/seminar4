#include <stdio.h>
#include <locale.h>
#include <math.h>

#define N 100



int v(char a[]) {
    int ch, i;
    for(i = 0; (ch = getchar()) != '\n' && ch != EOF; i++)
        a[i] = ch;
    return i;
}

int dec(int a){
    int  k,res = 0;
    char s[N];
    a = v(s);
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
    puts("Первое задание");
    printf("%d",res);
    return res;
}

int DecToBin( int dv )
{
    char ch1[N];
    int i,j,k=0;
    for(j = 0; (dv % 10) >= 1; ++j){
        ch1[j] = dv % 2;
        dv = dv/2;
    }
    for( i = 0;i<j;i++){
        if ( (i % 2) == 1){
            k = k + ch1[i];
        }
    }
    puts("\n Второй номер");
    printf("%d",k);
}


int main() {
    setlocale(LC_ALL, ".1251");
    int len1,dv;
    dv = dec(len1);
    DecToBin(dv);

}
