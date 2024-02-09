#include <stdio.h>


struct Firat {
	char name[20];
	char surname[20];
	int age;

};
int main() {
	struct Firat Dilek;
	Dilek.age = 36;
	strcpy(Dilek.name, "Dilek");
	strcpy(Dilek.surname, "Atalay");

	printf("Dunya\'nin en guzel kadin %s %s.\n" 
		"Onun yasi %d \n", Dilek.name, Dilek.surname, Dilek.age);
	//////////////////////////////////////////////////////////////
	struct Firat Eslem = { "Eslemnaz", "Atalay", 10 };
	printf("Dunya\'nin en guzel kadin\in kizi %s %s.\n"
		"Onun yasi %d \n", Eslem.name, Eslem.surname, Eslem.age);
	/////////////////////////////////////////////////////////////
	struct Firat Dogukan = { "Dogukan", "Atalay", 21 };
	printf("Dunya\'nin en guzel kadin\in oglu %s %s.\n"
		"Onun yasi %d \n", Dogukan.name, Dogukan.surname, Dogukan.age);
	//////////////////////////////////////////////////////////////

	struct Firat Muhammed;
	Muhammed = Dogukan;
	printf("Dunya\'nin en guzel kadin\in oglu %s %s.\n"
		"Onun yasi %d \n", Muhammed.name, Muhammed.surname, Muhammed.age);



}