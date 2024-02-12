#define TAMANHO_PALAVRA 50


struct musica
{
    char* nomemusica[TAMANHO_PALAVRA];
    char* nomecantor[TAMANHO_PALAVRA];
    int quantidade;
};

typedef struct musica MUSICA;

void mostramusica();
void adicionarmusica();

