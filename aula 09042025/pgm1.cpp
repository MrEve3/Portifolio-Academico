#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
int main()
{
		setlocale(LC_ALL,"portuguese");
	int n1,n2,soma,subtracao,multiplicacao;
	float divisao,resto,media,mediaharmonica;
	
	printf("Digite o 1� n�mero: ");
	scanf("%d",&n1);
	printf("Digite o 2� n�mero: ");
	scanf("%d",&n2);
	
	soma=n1+n2;
	printf("A soma dos n�meros �: %d\n",soma);
	
	subtracao=n1-n2;
	printf("A subtra��o dos n�meros �: %d\n",subtracao);
	
	multiplicacao=n1*n2;
	printf("A multiplica��o dos n�meros �: %d\n",multiplicacao);
	
	divisao=(float)n1/n2;
	printf("A divis�o dos n�meros �: %.1f\n",divisao);
	
	media=(float)(n1+n2)/2;
	printf("A m�dia dos n�meros �: %.1f\n",media);
	
	resto=n1%n2;
	printf("O resto da divis�o dos n�meros �: %.1f\n",resto);
	
	mediaharmonica = (float)2.0/((1.0/n1)+(1.0/n2));
	printf("A m�dia harm�nica dos n�meros �: %.1f\n",mediaharmonica);
	
}


	
