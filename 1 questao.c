#include <stdio.h>
#include <string.h>

int main()
{
    char clima[50];
    int temperatura;
    
    printf("Digite a temperatura: ");
    scanf("%d",&temperatura);
    
    if(temperatura > 25){
        strcpy(clima, "Ensolarado.");
    } else if(temperatura >= 15){
        strcpy(clima, "Nublado.");
    } else {
        strcpy(clima, "Chuvoso");
    }
    
    printf("%s",clima);
    return 0;
}
