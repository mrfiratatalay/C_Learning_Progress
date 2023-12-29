#include <stdio.h>
int main() {
	int numberOne = 12, numberTwo = 6;
	int dividedIntStore;
	float dividedFloatStore;
	double dividedDoubleStore;
	int convertFloatToInt;

	dividedIntStore = numberOne / numberTwo;
	printf("%d \n", dividedIntStore );

	dividedFloatStore = numberOne / numberTwo;
	printf("%.20f \n", dividedFloatStore);

	dividedDoubleStore = numberOne / numberTwo;
	printf("%.20f \n", dividedDoubleStore);

	convertFloatToInt = (int) numberOne / numberTwo;
	printf("%d \n", convertFloatToInt);
}