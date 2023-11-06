#include <stdio.h>

int main(){
    int numero, i;
    
    printf("Digite um numero inteiro positivo: ");
    scanf("%d",&numero);
    
    for(i = numero; i >= 0; i--){
        printf("\n%d",i);
        if(i <= 4){
        	printf(" hehe");
		} else if(i <= 8){
			printf(" ez");
		} else if(i <= 15){
			printf(" abacate");
		} else if(i <= 26){
			printf(" ABACAXI");
		} else if(i <= 40){
			printf(" ooooo");
		} else if(i <= 60){
			printf(" Cebola");
		} else if(i <= 90){
			printf("Tamarindo");
		} else if(i > 90){
			printf("Versao brasileira hebeterriches");
		}
	}
    return 0;
}
