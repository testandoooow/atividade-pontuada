#include <stdio.h>
#include <stdbool.h>
#include <string.h>


int main(){
    
    char codigo[250] = "5a0ff20";
    char user[250];
    bool login;
    
    do{
    	printf("Digite o codigo: ");
    	gets(user);
    	
    	login = strcmp(user, codigo) == 0 ? true : false;
    	
	} while(!login);
	
	printf("Acesso permitido.");

    return 0;
}
