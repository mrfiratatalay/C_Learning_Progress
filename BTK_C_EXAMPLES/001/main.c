#include <stdio.h>
int main() {
	char myFirstString[] = "eslem";
	char mySecondString[] = { 'e','s','l','e','m' , '\0'};
	printf("%s \n", myFirstString);
	printf("%s \n", mySecondString);
	printf("\n------------------\n");

	//------------------------------

	printf("%d \n", sizeof(myFirstString));
	printf("%d \n", sizeof(mySecondString));

}