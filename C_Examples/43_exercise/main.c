#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
	char myName[13];
	char myLastName[13];
	printf("WHO ARE YOU ? ");
	getchar();
	printf("My name is ");
	scanf("%s %s", &myName, &myLastName);
	printf("My name is %s %s", myName,myLastName);

	return 0;

}