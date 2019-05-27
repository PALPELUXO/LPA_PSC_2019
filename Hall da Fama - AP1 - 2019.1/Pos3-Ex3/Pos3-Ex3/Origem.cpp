/*

Um agricultor possui 1 (uma) espiga de milho. Cada espiga tem 150 grãos, e cada grão pesa 1g (um grama). Escreva um programa para determinar quantos anos serão necessários para que o agricultor colha mais de cem toneladas de milho, sendo que:
A cada ano ele planta todos os grãos da colheita anterior;
Há apenas uma colheita por ano;
10% (dez por cento) dos grãos não germinam (morrem sem produzir);
Cada grão que germina produz duas espigas de milho.

DESENVOLVIDO POR: LUIZ FELIPE TAURINHO SOBIERANSKI E AGOSTINHO CAPAÇA BASTO

*/

#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <math.h>
int main()
{
	int ano, peso;
	float espiga;
	ano = 0;
	peso = 0;
	espiga = 150;
	//peso esta em gramas entao para chegar em toneladas e necessario 1.000.000 gramas de grao;
	//utilizei da variavel peso para separar o numero de graos do peso em toneladas;
	while (peso < 100000000)
	{
		espiga = espiga - (espiga * 10 / 100);
		//A cada ano sera dispensado os 10% de graos que nao germinam;
		//A cada ano tera o dobro de espigas de milho;
		espiga = espiga * 2;
		peso = espiga;
		ano++;
	}
	//para representar em toneladas eu dividi o valor do peso por 1.000.000;
	peso = peso / 1000000;
	printf("\nTera germinado %2.2f graos\n", espiga);
	printf("\nPeso total: %d Toneladas\n", peso);
	printf("\nLevou %d anos para alcancar %d toneladas\n\n", ano, peso);
	system("pause");
	return 0;
}