// Exercício 11
#include<stdio.h>
#include<locale.h>
#include<stdlib.h>
main (){
	setlocale(LC_ALL,"Portuguese");
	
	int idade,opcao;
	printf("Informe a sua idade:\n\n");
	scanf("%i",&idade);
	if(idade<16)
	{
		printf("\nNão eleitor");
	}	
	else
	{
		if((idade>=18 && idade <65))
		{
			printf("\nEleitor obrigatório");	
		}
		else
		{
			printf("\nEleitor Facultativo");	
		}
	}


}

