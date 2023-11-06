#include <stdio.h>

int main(){
    
    int opcao, idade, jogos = 0;
    char nome[50];
    
    do{
    printf("\n1 - Novo jogo.\n2 - Carregar jogo.\n3 - Configurações.\nEscolha uma das opções acima: ");
    scanf("%d",&opcao);
    
    switch(opcao){
        case 1:
        jogos++;
        break;
        case 2:
        printf("Jogador: %d",jogos);
        break;
        case 3:
        printf("Configurações.");
    }
    } while (opcao == 1);
    return 0;
}
