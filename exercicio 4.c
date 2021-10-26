// Exercício 4 
#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
main (){
	setlocale(LC_ALL,"Portuguese");
	float pi, raio,altura,area;
	printf("\nInforme o raio do cilindro em cm\n");
	scanf("%f",&raio);
	printf("\nAgora informe a altura em cm\n");
	scanf("%f",&altura);
	pi = 3.14;
	area = (2*pi*raio)*(raio+altura);
	printf("\nA área deste cilindro é de %.2f cm²",area);
}
