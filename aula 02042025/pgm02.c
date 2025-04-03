//pergunte ao usuario a idade e mostre na tela
#include<stdio.h> //biblioteca de entrade/saida
#include<stdlib.h> //
#include<locale.h>
int main(){
	int idade;
	float altura;
	char nome[10000];
	
	setlocale(LC_ALL,"portuguese");
	printf("Qual é a sua idade?: ");
	scanf("%d",&idade);
	printf("Qual é a sua altura?: ");
	scanf("%f",&altura);
	printf("Qual o seu nome?: ");
	scanf("%s",&nome);
	printf("Sua idade é %d anos, sua altura é %.2f e seu nome é %s ",idade,altura,nome);	
	
	if (idade > 18)
		printf("Você é adulto");
	 else 
		printf("Você é menor");
	 
}
