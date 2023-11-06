#include <stdio.h>
#include <locale.h>

int main(){
		setlocale(LC_ALL, "portuguese");	
    int n;
    
    printf("Escolha o produto: 1 - camiseta, 2 - calça, 3 - sapato: ");
    scanf("%d",&n);
    
    switch(n){
        case 1:
        printf("Selecionado: camiseta. Valor: 20.00");
        break;
        case 2:
        printf("Selecionado: calça. Valor: 15.00");
        break;
        case 3:
        printf("Selecionado: sapato. Valor: 30.00");
        break;
    }

		return 0;
	}
