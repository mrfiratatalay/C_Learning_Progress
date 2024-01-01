#include <stdio.h>
int main() {
	int age;
	printf("I am gonna press F on my keyboard \n");
	age = getchar();
	printf("I have been pressed %c", age);
	return 0;
}