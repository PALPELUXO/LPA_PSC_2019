#include <stdio.h> 
#include <stdlib.h> 

int main()
{
	int produto, quantidade;
	float total;

	printf("Escolha o que deseja comprar:\n");
	printf("1 - Maca:\n");
	printf("2 - Laranja:\n");
	scanf_s("%d", &produto);

	if (produto == 1) //Maça
	{
		printf("Digite quantas unidades deseja comprar:");
		scanf_s("%d", &quantidade);

		total = quantidade * 2.3;
		printf("Pague %.2f por %d macas\n",total,quantidade);
	}
	else
	{
		if (produto == 2) //Laranja
		{
			printf("Digite quantas unidades deseja comprar:");
			scanf_s("%d", &quantidade);

			total = quantidade * 5.6;
			printf("Pague %.2f por %d laranjas\n", total, quantidade);
		}
		else
		{
			printf("Produto invalido!\n");
		}
	}
	system("pause");
	return 0;
}