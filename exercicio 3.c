//Exerc�cio 3.
# include <stdio.h>

int  main(){
int dia;
	printf("Entre com o numero do dia: ");
	scanf("%d" ,&dia);
	switch(dia) {
		case 1:printf("Domingo\n");
			break;
		case 2:printf("Segunda-feira\n");
			break;
		case 3:printf("Terca-feira\n");
			break;
		case 4:printf("Quarta-feira\n");
			break;
		case 5:printf("Quinta-feira\n");
			break;
		case 6:printf("Sexta-feira\n");
			break;
		case 7:printf("Sabado\n");
			break;
			
		default:printf("Codigo invalido\n");						
}
	return 0;
}
