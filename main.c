#include <stdio.h>

int main() {
	for (int i = 0; i <= 10; i++) {
		printf("%d\n", i);
	}

	int contador = 0;

	while (contador != 10) {
		printf("%d\n", contador);
		contador++;
	}

	if (contador == 10) {
		printf("O valor do contador e %d\n", contador);
	}



}