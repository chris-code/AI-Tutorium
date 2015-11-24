#include <stdio.h>
#include <stdlib.h>

void swap1(int a, int b) {
	int temp = a;
	a = b;
	b = temp;
}

void swap2(int *a, int *b) {
	int temp = *a;
	*a = *b;
	*b = temp;
}

void swap3(int *a, int *b) {
	int *temp = a;
	a = b;
	b = temp;
}

void swap4(int **a, int **b) {
	int *derefA = *a;
	int *derefB = *b;

	int temp = *derefA;
	*derefA = *derefB;
	*derefB = temp;
}

int main(void) {
	int number1 = 3, number2 = 2;
	int *number1pointer = &number1;
	int *number2pointer = &number2;

	printf("Orig.: %d - %d\n", number1, number2);

	printf("Select swap method: ");
	char selection = getchar();
	switch(selection) {
		case '1':
			swap1(number1, number2);
			break;
		case '2':
			swap2(&number1, &number2);
			break;
		case '3':
			swap3(&number1, &number2);
			break;
		case '4':
			swap4(&number1pointer, &number2pointer);
			break;
		default:
			printf("Oops.");
	}

	printf("Swap: %d - %d\n", number1, number2);

	return EXIT_SUCCESS;
}
