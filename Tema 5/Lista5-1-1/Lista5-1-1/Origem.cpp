/* Elabore um algoritmo que crie dois vetores A e B de 10 elementos e, 
a partir deles, crie um vetor C, composto pela soma dos elementos de cada posição de A e B.

Autoria: Evelin Iurko.
*/


#include<stdio.h>
#include<stdlib.h>

int main() {
	int vetor1[10], vetor2[10], vetor3[10];
	int i;
	for (i = 0; i <= 9; i++) {
		printf("Digite o valor %d do primeiro vetor:\n", (i + 1));
		scanf_s("%d", &vetor1[i]);
	}
	for (i = 0; i <= 9; i++)
	{
		printf("Digite o valor %d do segundo vetor:\n", (i + 1));
		scanf_s("%d", &vetor2[i]);
	}
	for (int i = 0; i <= 9; i++)
	{
		vetor3[i] = (vetor1[i] + vetor2[i]);
		printf("a soma dos vetores e: %d\n", vetor3[i]);
	}
	system("pause");
	return 0;
}