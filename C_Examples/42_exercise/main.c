#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
	/*
	Type your first name: Danny
Please to meet you, Danny.
	*/
	char myName[6];
	printf("Type your first name: ");
	scanf("%s", &myName);
	printf("Please to meet you, %s.", myName);
	return 0;

}