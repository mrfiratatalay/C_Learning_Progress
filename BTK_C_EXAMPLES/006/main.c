#include <stdio.h>
union Musa
{
	int age;
	char name[30];
	char surName[30];
};
int main() {
	union Musa Muhammed;
	Muhammed.age = 18;
	strcpy(Muhammed.surName, "Atalay");
	strcpy(Muhammed.name, "Muhammed");

	printf(" %d %s %s %d \n",sizeof(Muhammed), Muhammed.name, Muhammed.surName, Muhammed.age);

	Muhammed.age = 36;
	printf(" %d %s %s %d \n", sizeof(Muhammed), Muhammed.name, Muhammed.surName, Muhammed.age);

	strcpy(Muhammed.surName, "Atalay");
	printf(" %d %s %s %d \n", sizeof(Muhammed), Muhammed.name, Muhammed.surName, Muhammed.age);

}