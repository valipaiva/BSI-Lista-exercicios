#include <stdio.h>

int main()
{
	int divisor=2, valor;

	scanf("%d", &valor);

	while (valor!=1) {
		if (valor%divisor==0) {
			printf("%d\n", divisor);
			valor=valor/divisor;
			divisor=2;
		}
		else {
			divisor++;
		}
	}
	return 0;
}
