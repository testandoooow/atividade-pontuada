#include <stdio.h>

int main(){
    
    int n1, n2, resultado;
    char opcao;
    
    printf("Digite o primeiro numero: ");
    scanf("%d",&n1);

    printf("Digite o segundo numero: ");
    scanf("%d",&n2);
    
    fflush(stdin);
    
    printf("Escolha a operaçao matematica (+, -): ");
    scanf("%c",&opcao);
    
    switch(opcao){
        case '+':
        resultado = n1 + n2;
        break;
        case '-':
    	if(n1 < n2){
    		resultado = n2 + n1;
		} else {
			resultado = n1 + n2;
		}
        break;
        default:
        printf("Opçao invalida");
        break;
    }
    
    printf("Resultado: %d",resultado);
    return 0;
}
