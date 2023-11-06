#include <stdio.h>
#include <string.h>


int main(){
	
	float nota;
    char resultado[50];
    
    printf("Digite a sua nota: ");
    scanf("%f",&nota);
    
    if(nota >= 9){
        strcpy(resultado, "Excelente.");
    } else if(nota >= 7){
        strcpy(resultado, "Bom.");
    } else if(nota >= 5){
        strcpy(resultado, "Razoavel.");
    } else {
        strcpy(resultado, "Insuficiente.");
    }
    
    printf("%s",resultado);
    
		return 0;
	}
