#include <stdio.h>


int main(){
	
    int nota, i, soma = 0;
    float media;
    
    printf("Digite 5 notas.\n");
    for(i = 0; i <= 4; i++){
    	printf("Digite a %d nota: ",i+1);
    	scanf("%d",&nota);
    	
    	soma += nota;
	}
	
	media = soma / i;
    
    printf("Soma: %d\n",soma);
    printf("Media: %.2f",media);
 	return 0;   
}
