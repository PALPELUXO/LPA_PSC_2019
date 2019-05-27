/*
Fazer um programa para mostrar os 15 primeiros termos da s�rie de Fibonacci.

DESENVOLVIDO POR: EVELIN KAUANE IURKO
 e ROSIANE QUENIA PEREIRA DE ALMEIDA

*/


#include <stdio.h>
#include<stdlib.h>
int main()
{
	int fibonacci;
	int a = 0, b = 1, cont = 2; //atribui��o dos dois primeiros valores da sequ�ncia (1 e 0)
	printf("%i\n%i\n", a, b); //printando os 2 primeiros valores atribu�dos as vari�veis iniciais.
	while (cont < 15) // usando a fun��o while para fazer a sequencia num�rica at� o 15* valor. Cont inicia em 2 pois os 2 primeiros n�meros j� foram printados.
	{
		fibonacci = (a + b);//soma do numero "anterior" com o "pr�ximo" da se-quencia fibonacci
		printf("%i\n", fibonacci);
		cont++;
		a = b; //anterior passa a ser o pr�ximo
		b = fibonacci; //e pr�ximo passa a ser o somat�rio
	}
	system("pause");
	return 0;
}