#include <stdio.h>
int main() {

    int x, y, z;
    x = 13;
    y = 17;
    z = 21;

    printf(" X is %d\n Y is %d\n Z is %d\n", \
        x, y, z);
    printf("\n-----------------------------\n");

    printf(" X is %d\n Y is %d\n Z is %d\n",  x, y, z);
    printf("\n-----------------------------\n");

    printf(" X is %d\n Y is %d\n Z is %d\n",
        x,
        y, 
        z);
    printf("\n-----------------------------\n");


    return 0;

}

/*

printf ifadesi çok uzunsa, 
satýr sonlarýna \ (ters eðik çizgi) karakteri ekleyerek
veya virgülle ayrýlmýþ çok satýrlý bir þekilde yazabilirsiniz.
Bu, kodu daha okunabilir hale getirebilir.
Satýr sonlarý ve boþluklar genellikle
derleyici tarafýndan göz ardý edilir (white space). 
Bu nedenle, kodunuzun düzenlenmesini ve 
okunabilirliðini artýrmak için boþluklarý ve satýr sonlarýný istediðiniz
gibi kullanabilirsiniz.


*/