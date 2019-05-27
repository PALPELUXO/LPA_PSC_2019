/*
Escreva um programa que receba a velocidade máxima em uma avenida e a velocidade com que um 
motorista estava dirigindo nela.
Calcule a multa que o motorista vai receber, considerando que são pagos R$ 5,00 por cada km/h 
que estiver acima da velocidade permitida (considere apenas números inteiros). 
Se a velocidade do motorista estiver dentro do limite, o programa deve informar que não há multa.

DESENVOLVIDO POR: JULHO  CESAR RADICHESKI DA COSTA

*/

#include <stdio.h>
#include <stdlib.h>
int main()
{
	int velmax, velmot, res, multa;
	printf("Digite a velocidade maxima da avenida: ");
	scanf_s("%d", &velmax);
	printf("Digite sua velocidade na avenida: ");
	scanf_s("%d", &velmot);
	res = velmot - velmax; // calcula a diferença das velocidade
	if (res > 0) // verifica se a velocidade esta acima do permitido
	{
		multa = res * 5; //calcula o valor da multa ser pago
		printf("\nValor da multa a ser pago R$%d\n", multa);
	}
	else
	{
		printf("\nNao ha multa\n");
	}
	system("pause");
	return 0;
}