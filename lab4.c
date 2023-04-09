#include <locale.h>
#include "TransToDec.c"
#include "DecToBin.c"





int mainin() {
    setlocale(LC_ALL, ".1251");
    int len1,dv;
    dv = TransToDec(len1);
    DecToBin(dv);

}
