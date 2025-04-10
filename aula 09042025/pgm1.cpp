#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
int main()
{
		setlocale(LC_ALL,"portuguese");
	int n1,n2,soma,subtracao,multiplicacao;
	float divisao,resto,media,mediaharmonica;
	
	printf("Digite o 1° número: ");
	scanf("%d",&n1);
	printf("Digite o 2° número: ");
	scanf("%d",&n2);
	
	soma=n1+n2;
	printf("A soma dos números é: %d\n",soma);
	
	subtracao=n1-n2;
	printf("A subtração dos números é: %d\n",subtracao);
	
	multiplicacao=n1*n2;
	printf("A multiplicação dos números é: %d\n",multiplicacao);
	
	divisao=(float)n1/n2;
	printf("A divisão dos números é: %.1f\n",divisao);
	
	media=(float)(n1+n2)/2;
	printf("A média dos números é: %.1f\n",media);
	
	resto=n1%n2;
	printf("O resto da divisão dos números é: %.1f\n",resto);
	
	mediaharmonica = (float)2.0/((1.0/n1)+(1.0/n2));
	printf("A média harmônica dos números é: %.1f\n",mediaharmonica);
	
}


	
