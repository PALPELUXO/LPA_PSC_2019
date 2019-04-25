#include <stdio.h> 
#include <stdlib.h> 

int main() 
{
	float salario, vendas, percentual;
	int cod;

	printf("Digite o codigo do vendedor:\n");
	scanf_s("%d", &cod);

	printf("Digite o salario:\n");
	scanf_s("%f", &salario);

	printf("Digite o total de vendas em reais:\n");
	scanf_s("%f", &vendas);

	printf("Digite o percentual de vendas (valor de 0 a 100):\n");
	scanf_s("%f", &percentual);

	salario = salario + vendas * (percentual / 100);

	printf("Salario total: %.2f\n", salario);

	system("pause");
	return 0;
}