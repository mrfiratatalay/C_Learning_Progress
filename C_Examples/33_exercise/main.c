#include <stdio.h>
int main() {
	int x;
	printf("I'm waiting for a character: ");
	x = getc(stdin);
	printf("I waited for the '%c' character.\n", x);
	return 0;
}