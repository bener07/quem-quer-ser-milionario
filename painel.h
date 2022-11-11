#include <stdio.h>
#include <sys/ioctl.h>
#include <stdlib.h>
#include <string.h>
#include "funcoes.h"

// Função para escrever o painel no topo do ecrã.
int painel(char *nome, int pontos){
    system("clear");
    int linhas = get_terminal_size()[0];
    int colunas = get_terminal_size()[1]/6;
    char terminal[colunas][linhas];
    char *frases[2] = 
    {
        combine_str("Pontos: ", int_to_char(pontos)),
        combine_str("Nome: ", nome),
    };
    for (int coluna = 0; coluna < colunas; coluna++){
        for (int linha = 0; linha <= linhas; linha++){
            if ( linha == 0 || linha == linhas-1 || coluna == colunas-1 || coluna == 0 )
                terminal[coluna][linha] = '*';
            else
                terminal[coluna][linha] = ' ';
        }
        // Pontos
        if ( coluna == 1)
        {
            for ( int linha = 2; linha <= strlen(frases[0])+1; linha++){
                // if ( linha == strlen(frases[0]) )
                    // terminal[coluna][linha] = pontos;
                terminal[coluna][linha] = frases[0][linha-2];
            }
        }
        if ( coluna == 2)
        {
            for ( int linha = 2; linha < strlen(frases[1])+2; linha++)
                terminal[coluna][linha] = frases[1][linha-2];
        }
    }
    terminal[colunas][linhas] = '\n';
    printf("%s",terminal);
    return 0;
}