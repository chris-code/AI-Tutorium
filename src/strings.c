#include <stdlib.h>
#include <string.h>
#include <stdio.h>

int main(int argc, char **argv) {
//	 Aufgabenteil 1
	char alterText[] = "N'Gasta! Kvata! Kvakis! ahkstas so novajxletero \
(oix jhemile) so Ranetauw. Ricevas gxin pagintaj membrauw kaj aliaj \
individuauw, kiujn iamaniere tusxas so raneta aktivado. En gxi aperas \
informauw unuavice pri so lokauw so cxiumonataj kunvenauw, sed nature \
ankoix pri aliaj aktuasoj aktivecauw so societo. Ne malofte enahkstas \
krome plej diversaspekta materialo eduka oix distra.";
	printf("Input text:\n%s\n", alterText);
	printf("Laenge: %d\n\n", (int) strlen(alterText));

//	Aufgabenteil 2
	char newText[1000] = ""; // Platz fuer neuen Text
	char delimiter[] = " "; // Trennzeichen
	char *iter = strtok(alterText, delimiter); // Zeiger auf Teil des Textes
	while(iter != NULL) { // Teile Text an Trennzeichen
		if(strcmp(iter, "so") == 0) { // Wort ist 'so'
			strcat(newText, "AI"); // Ersetzen durch 'AI'
		} else { // Wort ist was anderes
			strcat(newText, iter); // einfach anhaengen
		}
		strcat(newText, " "); // Leerzeichen zwischen Woerter packen
		iter = strtok(NULL, delimiter); // Nachstes Wort finden
	}
	printf("Neuer text:\n%s\n", newText);
	printf("Laenge: %d\n\n", (int) strlen(newText));
//	Der Text ist um 1 Zeichen laenger, weil wir auch nach dem letzten Wort noch ' ' anhaengen
	
//	Aufgabenteil 3
	printf("Erstes 'AI' im Text: %lu\n\n", (strstr(newText, "AI") - newText)); // Zeigerarithmetik

//	Aufgabenteil 4
	printf("Urspruenglicher text:\n%s\n", alterText);
	printf("Laenge des urspruenglichen Textes: %d\n\n", (int) strlen(alterText));
//	Der Grund dafuer ist, dass strtok den Eingabestring veraendert.
//	Hinter jedem Token (was bei Trennzeichen ' ' ein Wort ist) wird
//	der String mit '\0' terminiert, weswegen strlen(..) nach dem
//	ersten Wort aufhoert.

	return EXIT_SUCCESS;
}
