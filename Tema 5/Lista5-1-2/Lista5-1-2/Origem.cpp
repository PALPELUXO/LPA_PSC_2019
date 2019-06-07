/* Dada uma sequência de n números digitados pelo usuário, 
imprimi-los na ordem inversa à de leitura.

Autoria: Evelin Iurko.
*/

#include<stdio.h>
#include<stdlib.h>

int main() {
	int vetor1[100];
	int i = 0, p = 1, n;

	printf("De quantos numeros sera a sequencia?\n\n");
	scanf_s("%d", &n);
	for (i = 0; i <= (n - 1); i++)
	{
		printf("Digite o valor %i do vetor1:\n", i + 1);
		scanf_s("%d", &vetor1[i]);
	}
	printf("\n");
	for (i = (n - 1); i >= 0; i--)
	{
		printf("%d\n", vetor1[i]);
	}
	system("pause");
	return 0;
}