/* Elaborar um algoritmo que lê um conjunto de 30 valores e os coloca em 2 vetores 
conforme forem pares ou ímpares.

Autoria: Evelin Iurko.
*/

#include<stdio.h>
#include<stdlib.h>
#define TAMANHOVETOR 30

int main() {
	int vetorpar[TAMANHOVETOR], vetorimpar[TAMANHOVETOR], valor[TAMANHOVETOR];
	int i = 0, ip = 0, ii = 0;

	for (i = 0; i <= (TAMANHOVETOR - 1); i++)
	{
		printf("Digite um valor\n");
		scanf_s("%i", &valor[i]);
		if
			(valor[i] % 2 == 0)
		{
			vetorpar[ip] = valor[i];
			ip++;
		}
		else
		{
			vetorimpar[ii] = valor[i];
			ii++;
		}
	}
	printf("\nvetor par\n");
	for (i = 0; i <= (ip - 1); i++)

	{
		printf("%i\n", vetorpar[i]);
	}
	printf("\nvetor impar\n ");

	for (i = 0; i <= (ii - 1); i++)
	{
		printf("%i\n", vetorimpar[i]);
	}
	system("pause");
	return 0;
}