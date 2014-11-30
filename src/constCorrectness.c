#include "stdlib.h"
#include "limits.h"
#include "stdio.h"

/*
 * Rueckgabewert: Der Zeiger soll nicht veraendert werden duerfen. Der Speicherbereich, auf
 * den er zeigt darf aber veraendert werden.
 *
 * Beim ersten Parameter sind sowohl der Zeiger, als auch der Bereich auf den er zeigt konstant.
 *
 * Der zweite Parameter ist einfach ne konstante Zahl.
 */
short * const getMinMax(const short * const numbers, const unsigned short length) {
//	Hier wird ein konstanzer Zeiger auf einen nicht konstanten Speicherbereich angelegt.
	short * const minMax = (short * const) malloc(2 * sizeof(short));
	if (minMax == NULL ) {
		exit(EXIT_FAILURE);
	}
	*(minMax + 0) = SHRT_MAX;
	*(minMax + 1) = SHRT_MIN;

	for (unsigned short index = 0; index < length; ++index) {
//		Number wird pro Durchlauf nur einmal beschrieben, daher const.
		const short number = numbers[index];

		if (number < *(minMax + 0)) {
			*(minMax + 0) = number;
		}
		if (number > *(minMax + 1)) {
			*(minMax + 1) = number;
		}
	}

	return minMax;
}

int main(int argc, char **argv) {
//	Konstantes Array von konstanten Shorts.
	const short const numbers[] = { 7, 4, 1, 5, 9, 4 };

//	Konstanter Zeiger, nicht konstanter Speicherbereich.
	short * const minMax = getMinMax(numbers, 5);

	printf("Minimum: %d\nMaximum: %d", minMax[0], minMax[1]);

	free(minMax);

	return EXIT_SUCCESS;
}

