/*
Escreva um programa que receba a velocidade m�xima em uma avenida e a velocidade com que um 
motorista estava dirigindo nela.
Calcule a multa que o motorista vai receber, considerando que s�o pagos R$ 5,00 por cada km/h 
que estiver acima da velocidade permitida (considere apenas n�meros inteiros). 
Se a velocidade do motorista estiver dentro do limite, o programa deve informar que n�o h� multa.

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
	res = velmot - velmax; // calcula a diferen�a das velocidade
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