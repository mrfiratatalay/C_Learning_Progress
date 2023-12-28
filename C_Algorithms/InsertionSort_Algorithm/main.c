//#define _CRT_SECURE_NO_WARNINGS
//
//#include <stdio.h>
//#include <stdlib.h>
//
//int main() {
//
//    int sinir, j, sakla;
//    int dizi[100];
//
//    printf("Girilecek sayi adeti: ");
//    scanf("%d", &sinir);  // Kaç adet sayý girileceði kullanýcýdan öðrenilir
//
//    //Kullanýcýdan sayýlar alýnýr
//    for (int i = 0; i < sinir; i++) {
//        printf("%d)Sayi giriniz: ", i + 1);
//        scanf("%d", &dizi[i]);
//    }
//
//    //Alýnan sayýlar ekrana yazdýrýlýr
//    printf("Dizinin Eski Hali\n");
//    for (int i = 0; i < sinir; i++)
//        printf("%d ", dizi[i]);
//    printf("\n\n"); // sayýlar yazdýrýldýktan sonra 2 satýr aþaðý iner
//
//    //Insertion Sort Algoritmasý
//    for (int i = 1; i < sinir; i++) {
//        sakla = dizi[i];
//        j = i;
//        while (j > 0 && sakla < dizi[j - 1]) {
//            dizi[j] = dizi[j - 1];
//            j--;
//        }
//        dizi[j] = sakla;
//    }
//
//    //Dizinin sýralanmýþ halini ekrana yazdýrýr
//    printf("Dizinin Yeni Hali\n");
//    for (int i = 0; i < sinir; i++)
//        printf("%d ", dizi[i]);
//
//    printf("\n");
//    system("pause");
//    return 0;
//}
