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

printf ifadesi �ok uzunsa, 
sat�r sonlar�na \ (ters e�ik �izgi) karakteri ekleyerek
veya virg�lle ayr�lm�� �ok sat�rl� bir �ekilde yazabilirsiniz.
Bu, kodu daha okunabilir hale getirebilir.
Sat�r sonlar� ve bo�luklar genellikle
derleyici taraf�ndan g�z ard� edilir (white space). 
Bu nedenle, kodunuzun d�zenlenmesini ve 
okunabilirli�ini art�rmak i�in bo�luklar� ve sat�r sonlar�n� istedi�iniz
gibi kullanabilirsiniz.


*/