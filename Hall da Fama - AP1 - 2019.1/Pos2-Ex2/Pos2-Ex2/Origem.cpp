/*
Fazer um programa para simular a trajetória parabólica de um projétil arremessado de uma altura h, 
com velocidade inicial V. Considerar que a posição (x,y) do projétil deve ser atualizada 
e mostrada via printf em um intervalo de tempo correspondente a dt (por exemplo, 10 ms).

DESENVOLVIDO POR: JULHO CESAR RADICHESKI DA COSTA

*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
	float g, h, v, t, x, y, vy, vx;
	// Altura inicial em que o projetil e arremessado
	printf("Digite a altura que o projetil sera arremessado: ");
	scanf_s("%f", &h);
	// Velocidade inicial em que o projetil e arremessado
	printf("Digite a velocidade incial que o projetil sera arremessado: ");
	scanf_s("%f", &v);
	// Tempo em que o projetil leva para chegar ao solo
	printf("Digite o intervalo de tempo (em segundos): ");
	scanf_s("%f", &t);
	g = -9.81;
	// Angulo de 45° para ter o maior alcance
	vy = v * sin(45); // calcula a velocidade inicial em y
	vx = v * cos(45); // calcula a velocidade inicial em x
	while (t >= 0)
	{
		y = (vy * t) - ((g * t * t) / 2); // calcula a posicao do projetil na vertical
		x = vx * t; // calcula a posicao do projetil na horizontal
		t--;
		printf("\nY = %.2fm\n", y);
		printf("X = %.2fm\n", x);
	}
	system("pause");
	return 0;
}