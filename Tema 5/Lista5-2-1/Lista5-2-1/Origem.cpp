#include <stdio.h>
#include <stdlib.h>

int main()
{
	int Matriz[100][100], Diagonal[100];
	int M, N, cont = 0;

	printf("Digite o numero de linhas: \n");
	scanf_s("%d", &M);
	while ((M < 1) || (M > 100))
	{
		printf("Digite o numero de linhas: \n");
		scanf_s("%d", &M);
	}

	printf("Digite o numero de colunas: \n");
	scanf_s("%d", &N);
	while ((N < 1) || (N > 100))
	{
		printf("Digite o numero de colunas: \n");
		scanf_s("%d", &N);
	}

	for (int i = 0; i < M; i++) //linhas
	{
		for (int j = 0; j < N; j++) //colunas
		{
			printf("Digite o valor [%d][%d]:\n ", i, j);
			scanf_s("%d", &Matriz[i][j]);

			if (i == j)
			{
				Diagonal[cont] = Matriz[i][j];
				cont++;
			}
		}
	}

	for (int i = 0; i < M; i++) //linhas
	{
		for (int j = 0; j < N; j++) //colunas
		{
			printf("%d\t", Matriz[i][j]);
		}
		printf("\n");
	}

	printf("\nDIAGONAL PRINCIPAL\n");
	for (int i = 0; i < cont; i++)
	{
		printf("%d\n", Diagonal[i]);
	}

	system("pause"); //OPCIONAL
	return 0;
}