#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	char frase[100];
	int tam;

	printf("Digite uma frase:");
	gets_s(frase); //le uma string

	puts(frase); //escreve uma string

	tam = strlen(frase);
	if (tam > 50)
	{
		printf("Frase maior do que 50 caracteres\n.");
	}

	system("pause");
	return 0;
}
