#include <stdio.h>

int primeira_pergunta(int pontos){
    int confirmacao;
    do{
        char r;
        puts("Qual desta versões fez um update aquático?");
        puts("A - 1.9");
        puts("B - 1.10");
        puts("C - 1.12");
        puts("D - 1.13");
        printf("Resposta: ");
        scanf(" %c", &r);
        switch(r){
            case 'A':
            case 'a':
                puts("Resposta Errada");
                confirmacao = 0;
                pontos--;
                break;
            case 'B':
            case 'b':
                puts("Resposta Errada");
                confirmacao = 0;
                pontos--;
                break;
            case 'c':
            case 'C':
                puts("Resposta Errada");
                confirmacao = 0;
                pontos--;
                break;
            case 'D':
            case 'd':
                puts("Resposta Certo");
                confirmacao = 0;
                pontos++;
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