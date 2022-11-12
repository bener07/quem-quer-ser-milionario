#include <stdio.h>
#include "painel.h"
#include "décima_pergunta.h"
#include "nona_pergunta.h"
#include "oitava_pergunta.h"

int main()
{
    int pontos = 0; // variável pontos onde vão ser incrementados e decrementados
    char nome[10]; // vetor nome onde vai ser escrita a string nome para depois ser posta no painel
    printf("Introduz o teu nome (max 10 letras): ");
    scanf("%s", nome); // pedir ao utilizador pelo nome dele e armazenar na variável nome
    // Código das primeiras (primeira á quarta) perguntas daqui

    // até aqui

    // código das seguintes perguntas (as do Samuel) perguntas daqui


    // até aqui
    painel(nome, pontos); // limpar o ecrã e colocar o painel de pontos no topo
    pontos = oitava_pergunta(pontos); // executar a função da oitava pergunta, devido ao que a função retorna é associado ao valor dos pontos.
    painel(nome, pontos); // limpar o ecrã e colocar o painel de pontos no topo
    pontos = nona_pergunta(pontos); 
    painel(nome,pontos);
    pontos = decima_pergunta(pontos);
    painel(nome, pontos);
    return 0;
}