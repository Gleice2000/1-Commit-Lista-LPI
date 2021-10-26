//Exercicio 8
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(){
	float cdf,cf;
	printf("Digite o custo de fabrica: \n");
	scanf("%f", &cdf);
	 cf = cdf + (cdf * 0.67);
	 printf ("O custo final ao consumidor sera de: %.2f", cf);
	
	return 0;
}
