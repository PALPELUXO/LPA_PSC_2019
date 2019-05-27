/*
Suponha que você está programando um módulo contador de cédulas para caixas eletrônicos. 
Escreva um programa que informa com quantas cédulas de Real podemos representar um determinado valor.

Exemplo de resposta: R$ 218 = 2 cédulas de 100, 1 cédula de 10, 1 cédula de 5, 1 cédula de 2 e 
1 cédula de 1. Procure minimizar o número de cédulas usadas. 
Desconsidere valores com centavos, assuma que o valor máximo para saque é de 999 reais e 
suponha que a máquina sempre tem disponível as cédulas necessárias.

DESENVOLVIDO POR: ISAIAS ROBERTO DE LIMA E SILVA E RAFAEL ALEJANDRO BENITES RODRIGUEZ

*/



#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
	setlocale(LC_ALL, "Portuguese"); // FUNÇÃO PARA CARACTERES ESPECIAIS
	int nv;
	nv = 1;
	printf("================= Caixa Eletrônico ================= \n");
	while (nv == 1) // LAÇO DE REPETIÇÃO PARA DEPOIS DE FINALIZADO, O USUÁRIO PODERÁ SOLICITAR OUTRO SAQUE
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
		while ((menu < 1) || (menu > 5)) // DECISÃO LÓGICA DO MENU CASO O NÚMERO DIGITADO NÃO CORRESPONDA AOS PARÂMETROS
		{
			printf("Favor digitar uma opção válida: \n");
			printf("1 para 20 Reais \n" "2 para 40 reais \n" "3 para 100 reais \n" "4 para 500 reais \n" "ou 5 para outros valores \n");
			scanf_s("%d", &menu);
		}
		switch (menu) // DECISÃO MENU
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
			while ((valor < 1) || (valor >= 1000)) // DECISÃO LÓGICA CASO O VALOR NÃO CORRESPONDA AOS PARÂMETROS
			{
				printf("-- Digite um valor maior ou igual a um real e menor do que mil reais: \n");
				scanf_s("%d", &valor);
			}
			break;
		}
		while (valor >= 100) // CONTAGEM DAS CÉDULAS
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
		if (cd100 > 0) // DECISÃO LÓGICA, CASO O VALOR DA VARIÁVEL DA CÉDULA CORRESPONDENTE SEJA MAIOR QUE 0, IMPRIME A QUANTI-DADE NA TELA, FINALIDADE DE INTERFACE
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
		printf("- 1 para sim \n" "- 0 para não \n");
		scanf_s("%d", &nv); // LEITURA DA VARIÁVEL DE CONTROLE DO LAÇO PRIMÁRIO
		while ((nv < 0) || (nv > 1)) // DECISÃO LÓGICA CASO OS PARÂMETROS NÃO SEJAM ATENDIDOS
		{
			printf("> Digite uma opção válida \n");
			printf("- 1 para sim \n" "- 0 para não \n");
			scanf_s("%d", &nv);
		}
}
system("pause");
return 0;
}