#include <stdio.h> 
#include <stdlib.h>

int main()
{
	/***********
	***printf***
	***********/
	printf("Ola mundo!");  //Escreve a frase na tela
	printf("\n");  //Comando para dar uma quebra de linha na tela
	printf("\t"); // Comando para dar um tab na tela
	printf("\nTestando\nA\nTabulacao\t!!\n\n\n"); //� possivel misturar tudo

	/************
	***scanf_s***
	************/
	//O scanf_s l� um dado digitado via teclado e salva na vari�vel desejada
	int x;
	printf("Digite um dado inteiro:");
	scanf_s("%d", &x);//%d ou %i - tipo int
					  //NUNCA ESQUE�A DO &
	printf("Valor digitado: %d\n", x); //Imprimi na tela o dado

	float y;
	printf("Digite um dado real:");
	scanf_s("%f", &y); //%f - tipo float
					   //NUNCA ESQUE�A DO &
	printf("Valor digitado: %f\n", y); //Imprimi na tela o dado

	//Podemos imprimir um float na tela restringindo as casas decimais
	//Veja:
	printf("Valor digitado: %.2f\n", y); //Imprimi na tela o dado
	printf("Valor digitado: %.3f\n", y); //Imprimi na tela o dado

	char letra;
	printf("Digite uma letra");
	scanf_s("%c", &letra);	//%c - tipo char
	printf("Letra digitada: %c\n", letra); //Imprimi na tela o dado


	system("pause");
	return 0;
}

