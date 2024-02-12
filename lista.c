#include <stdio.h>
#include "lista.h"
#include <stdlib.h>
#include <string.h>
#include "musica.h"

void abertura(){
    system("cls");
    printf("=====================================\n");
    printf("+         LISTA DE MUSICAS          +\n");
    printf("=====================================\n");

    printf("1 - MOTRAR MUSICAS\n");
    printf("2 - ADICIONAR MUSICAS\n");
    printf("3 - PRINTAR APERTOU 3\n");

}

void decideseacabou(int* acabar){
    char resposta;
    printf("\nDESEJA CONTINUAR NO PROGRAMA? (S/N)\n");
    scanf(" %c", &resposta);
    if(resposta == 'S'){
        (*acabar) =  0;
    }else{
        (*acabar) = 1;
    }
}



int main(){
    int acabou = 0;
    do{
        abertura();

        int opcao;
        scanf("%d", &opcao);

            switch (opcao){
    
            case 1:mostramusica();
                break;
            case 2: adicionarmusica();
                break;
            case 3: printf("APERTOU 3");
                break;

            default:
                break;
            }

            decideseacabou(&acabou);
    }while(!acabou);
    
}
