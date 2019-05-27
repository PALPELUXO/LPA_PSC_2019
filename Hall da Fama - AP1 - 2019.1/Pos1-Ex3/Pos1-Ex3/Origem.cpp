/* 
Faça um programa que sorteie um número aleatório entre 0 e 500 e pergunte ao usuário qual é o 
"número mágico". O número mágico é um número aleatório sorteado.
O programa deverá indicar se a tentativa efetuada pelo usuário é maior ou menor que o número
mágico e contar o número de tentativas. Quando o usuário conseguir acertar o número o programa 
deverá classificar o usuário como:

a) De 1 a 3 tentativas: muito sortudo
b) De 4 a 6 tentativas: sortudo
c) De 7 a 10 tentativas: normal
d) 10 tentativas: tente novamente

DESENVOLVIDO POR: ISAIAS ROBERTO DE LIMA E SILVA E RAFAEL ALEJANDRO BENITES RODRIGUEZ
*/


#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include <time.h>
int main()
{
	int start = 1;
	setlocale(LC_ALL, "Portuguese"); //Função para caracteres especiais.
	while (start == 1) // Laço primário caso após o termino o usuário desejar jogar novamente
	{
		unsigned int r, ler;
		int i;
		i = 1;
		r = 0;
		ler = 0;
		printf("************* Número Mágico ************* \n"); // Explicação das regras com system pause para não ficar muita informação de uma vez para o usuário
		printf("--> Regras do jogo: \n" "- O número mágico é um número aleatório sorteado de 0 a 500 \n" "- Você deverá tentar acertar o número mágico \n" "- São 4 níveis de sorte \n");
		system("Pause");
		printf("# De 1 a 3 tentativas: muito sortudo \n" "# De 4 a 6 tentativas: sortudo \n" "# De 7 a 10 tentativas: normal \n" "# 10 tentativas ou mais: tente novamente \n");
		system("Pause");
		srand(time(NULL)); // Gerar números aleatórios diferentes para cada execução
		r = rand() % 501; // Aplicação do número aleatório de 0 até 500
		printf("** Abracadabra... o número mágico já foi escolhido ** \n");
		printf("Digite o número mágico, e que os jogos comecem! \n");
		scanf_s("%i", &ler);
		while (ler != r) // Decisão Lógica sobre o número digitado
		{
			printf("> X < \n" "-- Oh você errou, tente novamente!\n");
			if (ler > r)
			{
				printf("* Uma dica, o número que você digitou é maior que o nosso número mágico \n");
			}
			else
			{
				if (ler < r)
				{
					printf("* Vou lhe ajudar, o número digitado é menor do que o número mágico \n");
				}
			}
			printf(">>> Digite o número novamente <<< \n");
			scanf_s("%i", &ler);
			i = i + 1;
		}
		printf(">>>>>>>>>>>>>> Acertou <<<<<<<<<<<<<< \n");
		switch (i) // Decisão lógica com base na quantidade de tentativas
		{
		case 1: case 2: case 3:
			printf("--> Muito sortudo! Jogue no bicho! \n");
			break;
		case 4: case 5: case 6:
			printf("--> Sortudo! Ligue para ela! \n");
			break;
		case 7: case 8: case 9: case 10:
			printf("--> Normal... copo meio cheio \ meio vazio \n");
			break;
		default:
			printf("--> Tente novamente! Lhe falta sorte! \n");
			break;
		}
		system("Pause");
		printf("=> Número de tentativas: %d \n", i);
		printf("===> Deseja jogar novamente? \n" "> 1 para sim \n" "> 0 para não \n");
		scanf_s("%d", &start);
		while ((start < 0) || (start > 1)) // Laço caso os parâmetros não sejam atendidos
		{
			printf("- Digite a opção válida. \n" "> 1 para sim \n" "> 0 para não \n");
			scanf_s("%d", &start);
		}
	}
	system("pause");
	return 0;
}