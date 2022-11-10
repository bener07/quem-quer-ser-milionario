#include <stdio.h>
int "primeira_pergunta" ()
{
    char r;
    printf("Qual desta versões fez um update aquático?\n");
    printf("Versão 1.9\n");
    printf("Versão 1.10\n");
    printf("Versão 1.12\n");
    printf("Versão 1.13\n");
    scanf("%c", &r);
    switch (r)
    {
    case 'A':printf(Errado);
        break;
    case 'B':printf(Errado);
        break;
    case 'C':printf(Errado);
        break;
    case 'D':printf(Certo);
        break;
    default:printf(NÃO HÁ ESSA OPÇÃO);
        break;
    }
    return 0;
    
}