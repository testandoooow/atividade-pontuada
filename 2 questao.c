#include <stdio.h>


int main(){
	
	float desconto, total;
	int compra, dia;
    
    printf("Digite o valor da compra: ");
    scanf("%d",&compra);
    
    printf("Digite o dia da semana: ");
    scanf("%d",&dia);
    
    switch(dia){
    	case 2:
    		case 3:
    			case 4:
    				case 5:
    					desconto = compra * 0.1;
    					break;
    	case 1:
    		case 7:
    			desconto = compra * 0.15;
    			break;
	}
    
    if(compra >= 100){
        total = compra - desconto;
    }
        printf("\nTotal: %.2f",total);
        
		return 0;
	}
