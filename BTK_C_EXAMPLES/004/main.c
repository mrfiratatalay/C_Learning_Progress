#include <stdio.h>
int main() {

	char strOne[] = "hello\nbaby";
	char strTwo[] = "hello\'baby";
	char strThree[] = "\"hello baby\"";
	char strFour[] = "hello\tbaby";
	char strFive[] = { 'h', 'i' , '\0' };
	char strSix[] = "\\hello \\baby";
	printf("%s\n", strOne);
	printf("%s\n ", "---------------------------------");
	printf("%s\n", strTwo);
	printf("%s\n ", "---------------------------------");
	printf("%s\n", strThree);
	printf("%s\n", "---------------------------------");
	printf("%s\n", strFour);
	printf("%s\n", "---------------------------------");
	printf("%s\n", strFive);
	printf("%s\n", "---------------------------------");
	printf("%s\n", strSix);
	printf("%s\n", "---------------------------------");

}