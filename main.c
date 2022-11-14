#include "painel.h"
#include "primeira_pergunta.h"
#include "segunda_pergunta.h"
#include "terceira_pergunta.h"
#include "quarta_pergunta.h"
#include "quinta_pergunta.h"
#include "sexta_pergunta.h"
#include "setima_pergunta.h"
#include "oitava_pergunta.h"
#include "nona_pergunta.h"
#include "decima_pergunta.h"

int main()
{
    int pontos = 0; // variável pontos onde vão ser incrementados e decrementados
    char nome[10]; // vetor nome onde vai ser escrita a string nome para depois ser posta no painel
    printf("Introduz o teu nome (max 10 letras): ");
    scanf("%s", nome); // pedir ao utilizador pelo nome dele e armazenar na variável nome
    painel(nome, pontos); 
    // codigo do pedro
    pontos = primeira_pergunta(pontos); 
    painel(nome, pontos); 
    pontos = segunda_pergunta(pontos); 
    painel(nome,pontos);
    pontos = terceira_pergunta(pontos);
    painel(nome, pontos);
    pontos = quarta_pergunta(pontos);
    painel(nome, pontos);
    // codigo do samuel
    pontos = quinta_pergunta(pontos);
    painel(nome, pontos);
    pontos = sexta_pergunta(pontos);
    painel(nome, pontos);
    pontos = setima_pergunta(pontos);
    painel(nome, pontos);
    // codigo do bernardo
    pontos = oitava_pergunta(pontos);
    painel(nome, pontos);
    pontos = nona_pergunta(pontos); // executar a função da oitava pergunta, devido ao que a função retorna é associado ao valor dos pontos.
    painel(nome, pontos); // limpar o ecrã e colocar o painel de pontos no topo
    pontos = decima_pergunta(pontos); 
    painel(nome,pontos);
    printf("\nParabéns %s acabaste o jogo com %d pontos!\n", nome, pontos);
    return 0;
}