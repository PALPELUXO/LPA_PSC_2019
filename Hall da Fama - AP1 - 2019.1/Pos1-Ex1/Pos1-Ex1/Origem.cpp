/*
Suponha que voc� est� programando um m�dulo contador de c�dulas para caixas eletr�nicos. 
Escreva um programa que informa com quantas c�dulas de Real podemos representar um determinado valor.

Exemplo de resposta: R$ 218 = 2 c�dulas de 100, 1 c�dula de 10, 1 c�dula de 5, 1 c�dula de 2 e 
1 c�dula de 1. Procure minimizar o n�mero de c�dulas usadas. 
Desconsidere valores com centavos, assuma que o valor m�ximo para saque � de 999 reais e 
suponha que a m�quina sempre tem dispon�vel as c�dulas necess�rias.

DESENVOLVIDO POR: ISAIAS ROBERTO DE LIMA E SILVA E RAFAEL ALEJANDRO BENITES RODRIGUEZ

*/



#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
	setlocale(LC_ALL, "Portuguese"); // FUN��O PARA CARACTERES ESPECIAIS
	int nv;
	nv = 1;
	printf("================= Caixa Eletr�nico ================= \n");
	while (nv == 1) // LA�O DE REPETI��O PARA DEPOIS DE FINALIZADO, O USU�RIO PODER� SOLICITAR OUTRO SAQUE
	{
		int cd100, cd50, cd20, cd10, cd5, cd2, cd1, menu, valor;
		cd100 = 0;
		cd50 = 0;
		cd20 = 0;
		cd10 = 0;
		cd5 = 0;
		cd2 = 0;
		cd1 = 0;
		valor = 0;
		printf("--> Selecione o valor de saque:\n");
		printf("- 1 para 20 Reais \n" "- 2 para 40 reais \n" "- 3 para 100 reais \n" "- 4 para 500 reais \n" "- 5 para outros valores \n");
		scanf_s("%d", &menu);
		while ((menu < 1) || (menu > 5)) // DECIS�O L�GICA DO MENU CASO O N�MERO DIGITADO N�O CORRESPONDA AOS PAR�METROS
		{
			printf("Favor digitar uma op��o v�lida: \n");
			printf("1 para 20 Reais \n" "2 para 40 reais \n" "3 para 100 reais \n" "4 para 500 reais \n" "ou 5 para outros valores \n");
			scanf_s("%d", &menu);
		}
		switch (menu) // DECIS�O MENU
		{
		case 1:
			valor = 20;
			break;
		case 2:
			valor = 40;
			break;
		case 3:
			valor = 100;
			break;
		case 4:
			valor = 500;
			break;
		default:
			printf("Digite o valor total de saque: \n");
			scanf_s("%d", &valor);
			while ((valor < 1) || (valor >= 1000)) // DECIS�O L�GICA CASO O VALOR N�O CORRESPONDA AOS PAR�METROS
			{
				printf("-- Digite um valor maior ou igual a um real e menor do que mil reais: \n");
				scanf_s("%d", &valor);
			}
			break;
		}
		while (valor >= 100) // CONTAGEM DAS C�DULAS
		{
			valor = valor - 100;
			cd100 = cd100 + 1;
		}
		while (valor >= 50)
		{
			valor = valor - 50;
			cd50 = cd50 + 1;
		}
		while (valor >= 20)
		{
			valor = valor - 20;
			cd20 = cd20 + 1;
		}
		while (valor >= 10)
		{
			valor = valor - 10;
			cd10 = cd10 + 1;
		}
		while (valor >= 5)
		{
			valor = valor - 5;
			cd5 = cd5 + 1;
		}
		while (valor >= 2)
		{
			valor = valor - 2;
			cd2 = cd2 + 1;
		}
		while (valor >= 1)
		{
			valor = valor - 1;
			cd1 = cd1 + 1;
		}
		if (cd100 > 0) // DECIS�O L�GICA, CASO O VALOR DA VARI�VEL DA C�DULA CORRESPONDENTE SEJA MAIOR QUE 0, IMPRIME A QUANTI-DADE NA TELA, FINALIDADE DE INTERFACE
		{
			printf(">> Notas de cem: %d \n", cd100);
		}
		if (cd50 > 0)
		{
			printf(">> Notas de cinquenta: %d \n", cd50);
		}
		if (cd20 > 0)
		{
			printf(">> Notas de vinte: %d \n", cd20);
		}
		if (cd10 > 0)
		{
			printf(">> Notas de dez: %d \n", cd10);
		}
		if (cd5 > 0)
		{
			printf(">> Notas de cinco: %d \n", cd5);
		}
		if (cd2 > 0)
		{
			printf(">> Notas de dois: %d \n", cd2);
		}
		if (cd1 > 0)
		{
			printf(">> Notas de um: %d \n", cd1);
		}
		printf("---> Deseja realizar outro saque? \n");
		printf("- 1 para sim \n" "- 0 para n�o \n");
		scanf_s("%d", &nv); // LEITURA DA VARI�VEL DE CONTROLE DO LA�O PRIM�RIO
		while ((nv < 0) || (nv > 1)) // DECIS�O L�GICA CASO OS PAR�METROS N�O SEJAM ATENDIDOS
		{
			printf("> Digite uma op��o v�lida \n");
			printf("- 1 para sim \n" "- 0 para n�o \n");
			scanf_s("%d", &nv);
		}
}
system("pause");
return 0;
}