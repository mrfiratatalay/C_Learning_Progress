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
//    scanf("%d", &sinir);  // Ka� adet say� girilece�i kullan�c�dan ��renilir
//
//    //Kullan�c�dan say�lar al�n�r
//    for (int i = 0; i < sinir; i++) {
//        printf("%d)Sayi giriniz: ", i + 1);
//        scanf("%d", &dizi[i]);
//    }
//
//    //Al�nan say�lar ekrana yazd�r�l�r
//    printf("Dizinin Eski Hali\n");
//    for (int i = 0; i < sinir; i++)
//        printf("%d ", dizi[i]);
//    printf("\n\n"); // say�lar yazd�r�ld�ktan sonra 2 sat�r a�a�� iner
//
//    //Insertion Sort Algoritmas�
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
//    //Dizinin s�ralanm�� halini ekrana yazd�r�r
//    printf("Dizinin Yeni Hali\n");
//    for (int i = 0; i < sinir; i++)
//        printf("%d ", dizi[i]);
//
//    printf("\n");
//    system("pause");
//    return 0;
//}
