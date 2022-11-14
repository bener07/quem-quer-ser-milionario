#include <stdio.h>

int nona_pergunta(int pontos){
    int confirmacao;
    do{
        char r;
        puts("Qual foi o primeiro nome do minecraft?");
        puts("A - Craft Game");
        puts("B - World Craft");
        puts("C - Cave Game");
        puts("D - Notch Game");
        printf("Resposta: ");
        scanf(" %c", &r);
        switch(r){
            case 'A':
            case 'a':
                puts("Resposta Errada");
                confirmacao = 0;
                pontos -= 10;
                break;
            case 'B':
            case 'b':
                puts("Resposta Errada");
                confirmacao = 0;
                pontos -= 10;
                break;
            case 'c':
            case 'C':
                puts("Resposta Correta");
                confirmacao = 0;
                pontos += 10;;
                break;
            case 'D':
            case 'd':
                puts("Resposta Errada");
                confirmacao = 0;
                pontos -= 10;
                break;
            default:
                printf("Caracter '%c' inválido\n", r);
                confirmacao = 1;
                break;
        }
    }
    while(confirmacao);
    printf("Clica no ENTER para prosseguir...");
    getchar(); // para apanhar com o ultimo \n introduzido, isto seria semelhante a scanf(" %c", input)
    while( getchar() != '\n' );
    return pontos;
}