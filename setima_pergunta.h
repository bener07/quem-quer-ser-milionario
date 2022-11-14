#include <stdio.h>

int decima_pergunta(int pontos){
    int confirmacao;
    do{
        char r;
        puts(" quando foi lançado?");
        puts("A - 16 de maio");
        puts("B - 14 de maio");
        puts("C - 24 de maio");
        puts("D - 31 de maio");
        printf("Resposta: ");
        scanf(" %c", &r);
        switch(r){
            case 'A':
            case 'a':
                puts("Resposta Correta");
                confirmacao = 0;
                pontos++;
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
    printf("Clica no ENTER para prosseguir...");
    getchar(); // para apanhar com o ultimo \n introduzido, isto seria semelhante a scanf(" %c", input)
    while( getchar() != '\n' );
    return pontos;
}