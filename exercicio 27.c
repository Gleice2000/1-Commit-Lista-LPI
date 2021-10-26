//Exercício 27
#include <stdio.h>
#include <stdlib.h>

int main(){
	int numAleatorio,num,cont=0;
	numAleatorio=rand()%10;
	do{
	printf("Numero da sorte:");
	scanf("%d",&num);
		cont++;
	}while(num!=numAleatorio);
	printf("Voce acertou em %d tentativas: )\n",cont);
	return 0;
}
