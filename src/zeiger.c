#include "stdlib.h"
#include "limits.h"
#include "stdio.h"

short * getMinMax(short * numbers, unsigned short length) {
	short * minMax = (short *) malloc(2 * sizeof(short)); // Alloziere Speicher fuer 2 Werte
	if (minMax == NULL ) { // Speicherallozierung fehlgeschlagen
		exit(EXIT_FAILURE);
	}
	*(minMax + 0) = SHRT_MAX; // Setze Minimum auf groesstmoeglichen Wert
	*(minMax + 1) = SHRT_MIN; // Setze Maximum auf kleinstmoeglichen wert

	for (unsigned short index = 0; index < length; ++index) {
		short number = numbers[index];

		if (number < *(minMax + 0)) { // Neues Minimum gefunden
			*(minMax + 0) = number;
		}
		if (number > *(minMax + 1)) { // Neues Maximum gefunden
			*(minMax + 1) = number;
		}
	}

	return minMax;
}

int main(int argc, char **argv) {
	short numbers[] = { 7, 4, 1, 5, 9, 4 };

	short * minMax = getMinMax(numbers, 5);
	printf("Minimum: %d\nMaximum: %d", minMax[0], minMax[1]);

	free(minMax); // Speicher freigeben. Nicht vergessen!
	return EXIT_SUCCESS;
}

