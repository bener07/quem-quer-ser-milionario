#include <stdio.h>

int terceira_pergunta(int pontos){
    int confirmacao;
    do{
        char r;
        puts("Qual destes mobs NÃO pode usar espada?");
        puts("A - Esqueleto");
        puts("B - Aranha");
        puts("C - Vindicator");
        puts("D - Zombie");
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
                puts("Resposta Certa");
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