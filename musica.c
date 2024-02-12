#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "musica.h"

MUSICA m;

void mostramusica(){
    FILE* f ;
    char musicas;
    f = fopen("musica.txt" , "r");
    if(f == 0){
        printf("DESCULPE, BANCO DE DADOS NAO DISPONIVEL!\n");
        exit(1); 
    }

    fscanf(f, "%d", &m.quantidade);
    printf("Lista de Musicas %d:\n" ,m.quantidade);

    do{
        musicas = fgetc(f);

        printf("%c" ,musicas);

    }while(musicas != EOF);


    fclose(f);
}

void adicionarmusica(){
    printf("ADICIONE UMA NOVA MUSICA\n");

    printf("QUAL O NOME DA MUSICA?\n");
    scanf("%s" ,m.nomemusica);

    printf("QUAL O NOME DO ARTISTA?\n");
    scanf("%s" ,m.nomecantor);   

    FILE* f;
    f = fopen("musica.txt" , "r+");
    if(f == NULL){
        printf("DESCULPE, BANCO DE DADOS INDISPONIVEL!");
        exit(1);
    }

    fscanf(f, "%d", &m.quantidade);
    m.quantidade++;

    fseek(f , 0, SEEK_SET);
    fprintf(f, "%d", m.quantidade);

    fseek(f, 0, SEEK_END);
    fprintf(f, "\n%s                %s", m.nomemusica, m.nomecantor);
    fclose(f);
}