#include <stdio.h>

int oitava_pergunta(int pontos){
    int confirmacao;
    do{
        char r;
        puts("No mincraft vanilla qual o Mob mais Forte?");
        puts("A - Wither");
        puts("B - Ender Dragon");
        puts("C - Herobrine");
        puts("D - Warden");
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