#include <stdio.h>
#include <string.h>

int main() {
	char aux, palavra1[6], palavra2[6];
	int i;
	scanf("%s", palavra1);
	scanf("%s", palavra2);
	for (i=0;i<2;i++) {
		aux = palavra2[i];
		palavra2[i] = palavra2[4-i];
		palavra2[4-i] = aux;
	}
	if (strcmp(palavra1, palavra2))
		printf("As palavras %s e %s não são palíndromos.", palavra1, palavra2);
	else
		printf("As palavras %s e %s são palíndromos.", palavra1, palavra2);
	return 0;
}
