/*
Escreva um algoritmo que leia um vetor de 100 posições. 
Em seguida, compacte o vetor, retirando os valores nulos e negativos. 
Coloque o resultado em outro vetor.

Autoria: Evelin Iurko.
*/

#include <stdio.h>
#include <stdlib.h>
int main()
{
	int vetor1[100], inteiros[100];
	int i;
	int f = 0;
	for (i = 0; i <= 99; i++)
	{
		printf("digite a posicao %d\n", i);
		scanf_s("%d", &vetor1[i]);
		if (vetor1[i] > 0)
		{
			inteiros[f] = vetor1[i];
			f++;
		}
	}
	printf("O novo vetor e compostos pelos numeros:\n");

	for (i = 0; i <= (f - 1); i++)
	{
		printf("%d\n", inteiros[i]);
	}
	system("pause");
	return 0;
}