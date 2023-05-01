#include <locale.h>
#include "func.h"

int mainin() {
    setlocale(LC_ALL, ".1251");
    int len1,dv;
    dv = TransToDec(len1);
    DecToBin(dv);


}
