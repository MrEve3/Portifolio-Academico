//pergunte ao usuario a idade e mostre na tela
#include<stdio.h> //biblioteca de entrade/saida
#include<stdlib.h> //
#include<locale.h>
int main(){
	int idade;
	setlocale(LC_ALL,"portuguese");
	printf("Qual � a sua idade: ");
	scanf("%d",&idade);
	printf("Sua idade � %d anos ",idade);	
}
