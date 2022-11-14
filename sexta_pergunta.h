#include <stdio.h>

int decima_pergunta(int pontos){
    int confirmacao;
    do{
        char r;
        puts("quem criou Minecraft?");
        puts("A - Not");
        puts("B - Note");
        puts("C - Noch");
        puts("D - Notch");
        printf("Resposta: ");
        scanf(" %c", &r);
        switch(r){
            case 'A':
            case 'a':
                puts("Resposta Errada
                ");
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
                puts("Resposta Correta");
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