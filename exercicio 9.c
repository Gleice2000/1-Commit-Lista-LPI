//Exercício 9
#include <stdio.h>

int main(){
	float km_litro,tempo,vel,dist,litros;
	while(1){
		printf("Entre com tempo (horas) da viagem e a velocidade media (km/h):");
		scanf("%f%f", &tempo, &vel);
		dist=tempo*vel;
		printf("Km por litro do automovel:");
		scanf("%f", &km_litro);
		litros=dist/km_litro;
		printf("Quantidade de litros utilizados: %.2f\n\n", litros);
	}
	return 0;
}
