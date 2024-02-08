#include <stdio.h>
#include <string.h>
int main() {
	char firstString[] = "hello";
	char secondString[] = "hello";
	printf("%d \n", strlen(firstString));
	printf("%d \n", sizeof(secondString));

	////////////////////////////////
	char firstStringPlus[10] = "hello";
	char secondStringPlus[10] = "hello";
	printf("%d \n", strlen(firstStringPlus));
	printf("%d \n", sizeof(secondStringPlus));

}