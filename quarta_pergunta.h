#include <stdio.h>

int quarta_pergunta(int pontos){
    int confirmacao;
    do{
        char r;
        puts("Quando tipos/cores de vidro existem? (não contes com os painéis de vidro)");
        puts("A - 17");
        puts("B - 18");
        puts("C - 16");
        puts("D - 15");
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
                puts("Resposta Certa");
                confirmacao = 0;
                pontos += 10;;
                break;
            case 'c':
            case 'C':
                puts("Resposta Errada");
                confirmacao = 0;
                pontos -= 10;
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