#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int main() {
	double taban, kuvvet, sonuc;
	printf("Can you enter to number first ");
	scanf("%lf", &taban);
	printf("Can u enter to number second ");
	scanf("%lf", &kuvvet);

	sonuc = pow(taban, kuvvet);
	printf("%.2lf ^ %.2lf = %.2lf", taban, kuvvet, sonuc);
	return 0;

}