/*
Escreva um algoritmo que leia um vetor de 80 elementos inteiros. 
Encontre e mostre o menor elemento e sua posição no vetor.

Autoria: Evelin Iurko.
*/

#include<stdio.h>
#include<stdlib.h>

int main()
{
	int vetor[80];
	int i, menor;

	printf("Digite o primeiro valor\n");
	scanf_s("%d", &vetor[0]);
	menor = vetor[0];
	for (i = 1; i <= 79; i++)
	{
		printf("Digite outro valor\n");
		scanf_s("%d", &vetor[i]);
		if (vetor[i] < menor)
		{
			menor = vetor[i];
		}

	}
	printf("O menor valor e %d e esta na posicao %d", menor, i); 
	system("pause");
}
