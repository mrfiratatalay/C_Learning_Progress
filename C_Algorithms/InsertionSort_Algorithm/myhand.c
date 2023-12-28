#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
 #include <stdlib.h>


int main() {
	int numberOfElements, acc, store;
	int myArray[100];

	printf("How many elements Do you have: ");
	scanf("%d", &numberOfElements);

	for (int i = 0; i < numberOfElements; i++) {
		printf("%d) Can you enter the number: ", i + 1);
		scanf("%d", &myArray[i]);
	}

	printf("FIRST VERSION\n");
	for (int i = 0; i < numberOfElements; i++) {
		printf("%d ", myArray[i]);
	}

	printf("\n\n");

	for (int i = 1; i < numberOfElements; i++) {
		store = myArray[i];
		acc = i;
		while (acc > 0 && store < myArray[acc - 1]) {
			myArray[acc] = myArray[acc - 1];
			acc--;
		}
		myArray[acc] = store;
	}
		
	printf("LAST VERSION\n");
	for (int i = 0; i < numberOfElements; i++) {
		printf("%d ", myArray[i]);
	}



}