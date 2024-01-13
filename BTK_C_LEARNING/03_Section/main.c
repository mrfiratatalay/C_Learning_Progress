#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
int main() {

	double numberOne, numberTwo, sonuc;
	printf("Number one is  ");
	scanf("%lf", &numberOne);

	sonuc = sqrt(numberOne);
	printf("%lf karakok icindeyse cevap = %lf", numberOne, sonuc);
	return 0;
}