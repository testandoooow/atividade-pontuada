#include <stdio.h>

int main(){
	
	int n;
    
    printf("Escolha o idioma de preferencia: 1 - Ingles, 2 - Espanhol, 3 - Frances: ");
    scanf("%d",&n);
    
    switch(n){
        case 1:
        printf("Welcome");
        break;
        case 2:
        printf("Bienvenido");
        break;
        case 3:
        printf("Accueillir");
        break;
    }
    
		return 0;
	}
