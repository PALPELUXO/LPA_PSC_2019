#include <stdio.h> 
#include <stdlib.h> 

int main()
{
	int x;

	printf("Digite um numero:\n");
	scanf_s("%d", &x);

	if (x >= 10)
	{
		printf("Valor maior ou igual a 10!\n");
	}
	else 
	{
		printf("Valor menor do que 10!\n");
	}

	system("pause");
	return 0;
}