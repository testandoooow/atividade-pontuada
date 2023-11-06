#include <stdio.h>

int main(){
	
    int numero, maior = 0, menor = 0, i;
    
    for(i = 1; i <= 2; i++){
    	printf("Digite o %d numero: ",i);
    	scanf("%d",&numero);
    	
    	menor = maior < numero ? maior : numero;
    	maior = maior > numero ? maior : numero;
	}
	
	printf("Maior: %d\n",maior);
	printf("Menor: %d",menor);
	
	return 0;
}
