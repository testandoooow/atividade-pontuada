#include <stdio.h>

int main(){
	
	int numero, par = 0, impar = 0, i, soma, somaPar = 0, somaImpar = 0;
	float media, mediaPar, mediaImpar;
	
	for(i = 0; i <= 5; i++){
		printf("Digite o %d numero: ",i+1);
		scanf("%d",&numero);
		
		if(numero > 0){
		soma += numero;
		}
		if(numero % 2 == 0){
		par++;
		somaPar += numero;
		} else {
		impar++;
		somaImpar += numero;
		}
	}
	
	media = soma / i;
	mediaPar = somaPar / par;
	mediaImpar = somaImpar / impar;
	
	
	printf("Par: %d\n",par);
	printf("Impar: %d\n",impar);
	printf("Media pares: %.1f\n",mediaPar);
	printf("Media impares: %.1f",mediaImpar);
	
		return 0;
	}
