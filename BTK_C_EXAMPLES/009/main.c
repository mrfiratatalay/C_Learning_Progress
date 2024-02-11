#include <stdio.h>
int main() {
	printf("------PART(1)--------\n");

	int myNumber = 13;
	int *pointer;
	pointer = &myNumber;
	int dpointer = &pointer;
	printf("My variable (%d)\'s address is %d \n", myNumber, &myNumber);
	printf("My variable (%d)\'s address is %d \n", myNumber, pointer);
	printf("My variable (%d)\'s value is %d \n", myNumber, myNumber);
	printf("My variable (%d)\'s value is %d \n", myNumber, *pointer);
	printf("My pointer\'s address is %d \n", &pointer);
	printf("My pointer\'s address is %d \n", dpointer);

	printf("\n-----PART(2)--------\n");
	int one, two, total;
	int* ptr = &one;
	int* ptr2 = &two;

	printf("Would\'u like to enter two number? \n");
	scanf_s("%d%d", ptr, ptr2);
	total = *ptr + *ptr2;
	printf("Total is  %d ", total);

}