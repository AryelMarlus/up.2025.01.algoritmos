#include <stdio.h>

int main() {

	// cria uma variável do tipo numero inteiro chamada numeroInteiro e coloca o valor 0 dentro dela
	int numeroInteiro = 0;
	// exibe na tela o conteúdo da variável chamada numeroInteiro
	printf("Conteudo da variavel de numero inteiro: %d\n", numeroInteiro);

	// cria uma variavel do tipo float chamada numeroFloat e coloca o valor 0.0 dentro dela
	float numeroFloat = 0.0;
	// exibe na tela o conteúdo da variável chamada numeroFloat
	printf("Conteudo da variavel de numero float: %f\n", numeroFloat);

	// cria uma variável do tipo double chamada numeroDouble e coloca o valor 0.0 dentro dela
	double numeroDouble = 0.0;
	// exibe na tela o conteúdo da variável chamada numeroDouble
	printf("Conteudo da variavel de numero double: %f\n", numeroDouble);

	// cria uma variável do tipo texto chamada texto e coloca o valor abc dentro dela
	char texto[] = "abc";		
	// exibe o conteúdo da variável chamda texto
	printf("Conteudo da variavel de texto %s\n", texto);

	// define um repetidor do tipo for, que cria e inicia uma variavel inteira chamada i iniciando com 0 (int i = 0)
	// enquanto o conteúdo da variavel i for menor ou igual a 10 (i <= 10)
	// o for irá repetir o código que está entre {}, e cada vez que o fizer, irá incrementar em 1 o valor da variavel i (i++)
	for (int i = 0; i <= 10; i++) {
		printf("O conteudo da variavel inteira chamada i e: %d\n", i);
	}

	// define uma variavel do tipo inteiro chamada contador e coloca o valor 0 dentro dela
	int contador = 0;

	// define um repetidor do tipo while, que irá executar o código que estiver entre {} 
	// ele irá repetir esta execucao enquanto o conteudo da variavel contador for diferente de 10 (contador != 10)
	while (contador != 10) {
		printf("O conteudo da variavel inteira chamada contador e: %d\n", contador);
		// incrementa em 1 o valor da variavel chamada contador, equivalente a fazer contador = contador +1
		contador++;
	}

	// verifica se o conteudo da variavel chamada contador e igual a 10 (contador == 10)
	// se (if) esta verificacao for verdadeira, executa o codigo entre {}
	if (contador == 10) {
		printf("O valor da variavel contador e %d\n", contador);
	}

	// verifica se o conteudo da variavel chamada contador e igual a 0 (contador == 0)
	// se (if) esta verificacao for verdadeira, executa o codigo entre {}
	if (contador == 0) {
		printf("O valor da variavel contador e %d\n", contador);
	}
	// senão (else), ou seja, se o valor na variavel contador nao for 0 (if anterior), executa o codigo entre {}
	else {
		printf("O conteudo da variavel contador nao e 0");

	}
}