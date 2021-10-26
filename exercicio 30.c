//Exercício 30
#include <stdio.h>

int main(){
int qtd,i,nota_corte,p1,p2,cont=0;
printf("Quantidade de participantes: ");
scanf("%d",&qtd);
printf("Nota de corte: ");
scanf("%d",&nota_corte);
for(i=1;i<=qtd;i++){
printf("Pontuacoes do participante %d: ",i);
scanf("%d%d", &p1, &p2);
if( (p1+p2)>= nota_corte)
cont++;
}
printf("Quantidade de classificados: %d", cont);
 }
