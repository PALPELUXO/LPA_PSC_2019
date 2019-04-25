#include <stdio.h> 
#include <stdlib.h> 

int main()
{
	float salario;
	int tempo;

	printf("Digite o salario do funcionario:");
	scanf_s("%f", &salario);
	printf("Digite o tempo de servico do funcionario:");
	scanf_s("%d", &tempo);

	if (tempo > 5)
	{
		printf("Salario com bonificacao: %.2f\n", salario*1.2);
	}
	else
	{
		printf("Salario com bonificacao: %.2f\n", salario*1.1);
	}
	system("pause");
	return 0;
}