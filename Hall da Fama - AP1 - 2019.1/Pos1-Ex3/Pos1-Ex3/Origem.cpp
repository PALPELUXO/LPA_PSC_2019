/* 
Fa�a um programa que sorteie um n�mero aleat�rio entre 0 e 500 e pergunte ao usu�rio qual � o 
"n�mero m�gico". O n�mero m�gico � um n�mero aleat�rio sorteado.
O programa dever� indicar se a tentativa efetuada pelo usu�rio � maior ou menor que o n�mero
m�gico e contar o n�mero de tentativas. Quando o usu�rio conseguir acertar o n�mero o programa 
dever� classificar o usu�rio como:

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
	setlocale(LC_ALL, "Portuguese"); //Fun��o para caracteres especiais.
	while (start == 1) // La�o prim�rio caso ap�s o termino o usu�rio desejar jogar novamente
	{
		unsigned int r, ler;
		int i;
		i = 1;
		r = 0;
		ler = 0;
		printf("************* N�mero M�gico ************* \n"); // Explica��o das regras com system pause para n�o ficar muita informa��o de uma vez para o usu�rio
		printf("--> Regras do jogo: \n" "- O n�mero m�gico � um n�mero aleat�rio sorteado de 0 a 500 \n" "- Voc� dever� tentar acertar o n�mero m�gico \n" "- S�o 4 n�veis de sorte \n");
		system("Pause");
		printf("# De 1 a 3 tentativas: muito sortudo \n" "# De 4 a 6 tentativas: sortudo \n" "# De 7 a 10 tentativas: normal \n" "# 10 tentativas ou mais: tente novamente \n");
		system("Pause");
		srand(time(NULL)); // Gerar n�meros aleat�rios diferentes para cada execu��o
		r = rand() % 501; // Aplica��o do n�mero aleat�rio de 0 at� 500
		printf("** Abracadabra... o n�mero m�gico j� foi escolhido ** \n");
		printf("Digite o n�mero m�gico, e que os jogos comecem! \n");
		scanf_s("%i", &ler);
		while (ler != r) // Decis�o L�gica sobre o n�mero digitado
		{
			printf("> X < \n" "-- Oh voc� errou, tente novamente!\n");
			if (ler > r)
			{
				printf("* Uma dica, o n�mero que voc� digitou � maior que o nosso n�mero m�gico \n");
			}
			else
			{
				if (ler < r)
				{
					printf("* Vou lhe ajudar, o n�mero digitado � menor do que o n�mero m�gico \n");
				}
			}
			printf(">>> Digite o n�mero novamente <<< \n");
			scanf_s("%i", &ler);
			i = i + 1;
		}
		printf(">>>>>>>>>>>>>> Acertou <<<<<<<<<<<<<< \n");
		switch (i) // Decis�o l�gica com base na quantidade de tentativas
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
		printf("=> N�mero de tentativas: %d \n", i);
		printf("===> Deseja jogar novamente? \n" "> 1 para sim \n" "> 0 para n�o \n");
		scanf_s("%d", &start);
		while ((start < 0) || (start > 1)) // La�o caso os par�metros n�o sejam atendidos
		{
			printf("- Digite a op��o v�lida. \n" "> 1 para sim \n" "> 0 para n�o \n");
			scanf_s("%d", &start);
		}
	}
	system("pause");
	return 0;
}