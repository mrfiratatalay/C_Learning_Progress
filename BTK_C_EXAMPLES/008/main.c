#include <stdio.h>
int main() {

	char myCharacter = 'F';
	int number = 13;
	float myFloat = 13.01313;
	long long myLong = 1313131313;
	printf("Variable\'s value: %c, Variable address: %d \n", myCharacter, &myCharacter);
	printf("Variable\'s value: %d, Variable address: %d \n", number, &number);
	printf("Variable\'s value: %f, Variable address: %d \n", myFloat, &myFloat);
	printf("Variable\'s value: %lld, Variable address: %d \n", myLong, &myLong);

}

