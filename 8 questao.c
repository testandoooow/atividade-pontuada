#include <stdio.h>

int main(){
    int numero, i;
    
    printf("Digite um numero inteiro positivo: ");
    scanf("%d",&numero);
    
    for(i = numero; i >= 0; i--){
        printf("\n%d",i);
        switch(i){
            case 0:
            printf(" End");
            break;
            case 1:
            printf(" Versao brasileira hebeterriches\n");
            break;
            case 2:
            printf(" ooooo\n");
            break;
            case 3:
            printf(" epa!\n");
            break;
            case 4:
            printf(" CAVALO!\n");
            break;
            case 5:
            printf(" hehe\n");
            break;
            case 6:
            printf(" ez\n");
            break;
            case 7:
            printf(" haha\n");
            break;
            case 8:
            printf(" Vasco\n");
            break;
            case 9:
            printf(" Tamarindo\n");
            break;
            case 10:
            printf(" Cebola\n");
            break;
            default:
            printf(" E\n");
        }
    }
    return 0;
}