#include <stdio.h>
int main() {
	int asciiRepresent;
	printf("Can you press any letters \n");
	asciiRepresent = getchar();
	printf("I will show you the F == %d ASCII equivalent of this letter.", asciiRepresent);
	return 0;
}