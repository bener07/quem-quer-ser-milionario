#include <stdio.h>

int oitava_pergunta(int pontos){
    int confirmacao;
    do{
        char r;
        puts("Qual o animal mais adorado do jogo?");
        puts("A - Lobo");
        puts("B - Cavalo");
        puts("C - Cão");
        puts("D - Gato");
        printf("Resposta: ");
        scanf(" %c", &r);
        switch(r){
            case 'A':
                puts("Resposta Correta");
                confirmacao = 0;
                pontos++;
                break;
            case 'B':
                puts("Resposta Errada");
                confirmacao = 0;
                pontos--;
                break;
            case 'C':
                puts("Resposta Errada");
                confirmacao = 0;
                pontos--;
                break;
            case 'D':
                puts("Resposta Errada");
                confirmacao = 0;
                pontos--;
                break;
            default:
                printf("Caracter '%c' inválido\n", r);
                confirmacao = 1;
                break;
        }
    }
    while(confirmacao);
    return pontos;
}