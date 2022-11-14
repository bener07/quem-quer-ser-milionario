#include <stdio.h>

int decima_pergunta(int pontos){
    int confirmacao;
    do{
        char r;
        puts("em que ano foi lançado Minecraft?");
        puts("A - 2006");
        puts("B - 2008");
        puts("C - 2009");
        puts("D - 2007");
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
                puts("Resposta Correta");
                confirmacao = 0;
                pontos++;
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