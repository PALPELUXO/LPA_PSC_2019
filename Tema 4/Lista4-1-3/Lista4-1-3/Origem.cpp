#include <stdio.h>
#include <stdlib.h>

int main()
{
	int inicial, final;
	int contpos = 0, contpar = 0, contimpar = 0, contdiv = 0, conttotal = 0;
	float somapos = 0, somapar = 0, somaimpar = 0, somadiv = 0, somatotal = 0;
	float mediapos = 0, mediapar = 0, mediaimpar = 0, mediadiv = 0, mediatotal = 0;

	printf("Digite o valor para iniciar:");
	scanf_s("%d", &inicial);
	printf("Digite o valor final:");
	scanf_s("%d", &final);

	for (int i = inicial; i <= final; i++)
	{
		conttotal++;
		somatotal += i; //total

		if (i > 0) //inteiro e positivos
		{
			contpos++;
			somapos += i;
		}

		if (i % 2 == 0) //pares
		{
			contpar++;
			somapar += i;
		}
		else //impares
		{
			contimpar++;
			somaimpar += i;
			if ((i % 3 == 0) && (i % 7 == 0)) //impares e divisiveis 3 e 7
			//if (i % 21 == 0)
			{
				contdiv++;
				somadiv += i;
			}
		}
	}
	mediapos = somapos/contpos; 
	mediapar = somapar/contpar;
	mediaimpar = somaimpar/contimpar;
	mediadiv = somadiv/contdiv;
	mediatotal = somatotal/conttotal;

	printf("\n\n");
	if (mediapos > 0)
		printf("Media dos inteiros e positivos: %.2f\n", mediapos);
	if (mediapar > 0)
		printf("Media dos pares: %.2f\n", mediapar);
	if (mediaimpar > 0)
		printf("Media dos impares: %.2f\n", mediaimpar);
	if (mediadiv > 0)
		printf("Media dos impares divisiveis por 3 e 7: %.2f\n", mediadiv);
	if (mediatotal > 0)
		printf("Media total: %.2f\n", mediatotal);

	system("pause");
	return 0;
}