//Exercicio 14
#include <stdio.h>
#include <stdlib.h>
int main() {
	char time1[30], time2[30] ;
	int golstime1, golstime2;
	printf("Time 1: ");
		scanf("%s" , &time1);	
	printf("Time 2: ");
		scanf("%s" , &time2);
	printf ("Quantidade de Gols / Time %s : ", &time1 );
		scanf("%d", &golstime1);
	printf ("Quantidade de Gols / Time %s : ", &time2 );
		scanf("%d", &golstime2);
		
	if ( golstime1 > golstime2){
		printf("Vencedor : >> %s <<\n", time1);
		printf("%s : 3 pontos.\n" ,time1);
		printf("%s : 0 pontos." ,time2, golstime2);
	}else if ( golstime1 == golstime2){
		printf(">> Empate << \n");
		printf("%s : 1 ponto.\n" ,time1);
		printf("%s : 1 ponto." ,time2, golstime2);
	}else {
		printf("Vencedor : >> %s <<\n", time2);
		printf("%s : 3 pontos.\n" ,time2);
		printf("%s : 0 pontos." ,time1, golstime1);
	}
	return 0;
}
