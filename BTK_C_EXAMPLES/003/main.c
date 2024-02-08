#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main() {

	char firstStr[20] = "firat ";
	char secondStr[20] = "atalay  ";
	char thirdStr[] = "!!!";
	char stored[30];

	strcat(secondStr, thirdStr);
	strcat(firstStr, secondStr);
	strcpy(stored, firstStr);
	printf("%s \n", firstStr);
	printf("%s \n", stored);

	////////////////////////

	printf("%d \n", strcmp(firstStr, stored));
	printf("%d \n", strcmp(firstStr, secondStr));
	printf("%d \n", strcmp(thirdStr, secondStr ));




}