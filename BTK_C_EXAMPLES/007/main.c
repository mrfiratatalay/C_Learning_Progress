#include <stdio.h>
enum Firat {
	sad,
	happy,
	angry
};

enum Firat2 {
	ugly=12,
	beautiful
};
int main() {
	enum Firat Dilek = happy;
	printf("%d \n", Dilek);
	enum Firat DilekPlus = beautiful;
	printf("%d", DilekPlus);
}