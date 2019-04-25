#include <stdio.h> 
#include <stdlib.h> 

int main()
{
	float custo_final, custo_fab, distrib, imposto;

	printf("Digite o valor de fabrica do carro\n");
	scanf_s("%f", &custo_fab);

	printf("Digite o percentual de impostos no veiculo (0 a 100)\n");
	scanf_s("%f", &imposto);

	printf("Digite o percentual de ganho da distribuidora do veiculo (0 a 100)\n");
	scanf_s("%f", &distrib);

	custo_final = custo_fab + (custo_fab * imposto / 100) + (custo_fab * distrib /100);

	printf("Custo final do veiculo: %.2f\n", custo_final);

	system("pause");
	return 0;
}