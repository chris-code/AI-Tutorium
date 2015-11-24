#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int getYear() {
	time_t t = time(NULL);
	struct tm *lTime = localtime(&t);
	return lTime->tm_year + 1900;
}

int main(int argc, char **argv)
{
	printf("Bitte gib dein Geburtsjahr ein: ");
	int geburtsjahr;
	scanf("%d", &geburtsjahr);
	
	int currentYear = getYear();
	
	int alter = currentYear - geburtsjahr;
	if(alter >= 18) {
		printf("Ok.");
		return EXIT_SUCCESS;
	}
	else {
		printf("Noch keine 18!");
		return EXIT_FAILURE;
	}
}

