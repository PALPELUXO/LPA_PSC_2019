#include <stdio.h> 
#include <stdlib.h> 

int main()
{
	int ano;

	printf("Digite o ano de nascimento (no formato AAAA):\n");
	scanf_s("%d", &ano);

	if ((2019 - ano) >= 18)
	{
		printf("Maior de idade! Idade atual: %d\n", 2019 - ano);
	}
	else
	{
		printf("Menor de idade! Idade atual: %d\n", 2019 - ano);
	}
	system("pause");
	return 0;
}