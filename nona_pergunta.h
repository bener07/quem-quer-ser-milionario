#include <stdio.h>

int oitava_pergunta(int pontos){
    int confirmacao;
    do{
        char r;
        puts("Qual foi o primeiro nome do minecraft?");
        puts("A - Craft Game");
        puts("B - World craft");
        puts("C - Cave game");
        puts("D - Notch game");
        printf("Resposta: ");
        scanf(" %c", &r);
        switch(r){
            case 'A':
                puts("Resposta Errada");
                confirmacao = 0;
                pontos++;
                break;
            case 'B':
                puts("Resposta Errada");
                confirmacao = 0;
                pontos--;
                break;
            case 'C':
                puts("Resposta Correta");
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