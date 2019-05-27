/*
Fazer um programa para mostrar os 15 primeiros termos da série de Fibonacci.

DESENVOLVIDO POR: EVELIN KAUANE IURKO
 e ROSIANE QUENIA PEREIRA DE ALMEIDA

*/


#include <stdio.h>
#include<stdlib.h>
int main()
{
	int fibonacci;
	int a = 0, b = 1, cont = 2; //atribuição dos dois primeiros valores da sequência (1 e 0)
	printf("%i\n%i\n", a, b); //printando os 2 primeiros valores atribuídos as variáveis iniciais.
	while (cont < 15) // usando a função while para fazer a sequencia numérica até o 15* valor. Cont inicia em 2 pois os 2 primeiros números já foram printados.
	{
		fibonacci = (a + b);//soma do numero "anterior" com o "próximo" da se-quencia fibonacci
		printf("%i\n", fibonacci);
		cont++;
		a = b; //anterior passa a ser o próximo
		b = fibonacci; //e próximo passa a ser o somatório
	}
	system("pause");
	return 0;
}