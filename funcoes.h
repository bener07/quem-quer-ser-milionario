#include <string.h>
#include <stdio.h>
#include <stdlib.h>

int *get_terminal_size()
{
 int cols;          // variável cols provávelmente onde é armazenado a cor do terminal
 int lines;         // variável lines provávelmente onde é armazenado as linhas do terminal

 #ifdef TIOCGSIZE
 struct ttysize ts;
 ioctl(0,TIOCGSIZE, &ts);
 lines = ts.ts_linesl;
 cols = ts.ts_cols;

 #elif defined(TIOCGWINSZ)
 struct winsize ts;
 ioctl(0, TIOCGWINSZ, &ts);
 lines = ts.ws_row;
 cols = ts.ws_col;

 #endif
 int *res = malloc(sizeof(int)*2);
 res[0] = cols;
 res[1] = lines;
 return res;
}

char *combine_str(const char *dst, const char *src){
    char *res = malloc(strlen(dst) + strlen(src));
    char tmp[strlen(dst) + strlen(src)+1];
    for (int i = 0; i < strlen(dst)+strlen(src); i++)
        if ( strlen(dst) <= i )
            tmp[i] = src[i-strlen(dst)];
        else
            tmp[i] = dst[i];
    tmp[strlen(dst) + strlen(src)] = '\0';
    strcpy(res, tmp);
    return res;
}
/*Função com um simples algoritmo para calcular as centenas, dezenas e unidades com base nos sistema
de base 10 e com base neste algortimo n*10^1 = rn. Com base nisto o algoritmo inverte a multiplicação
e transforma o resultado de n (rn) novamente em n ficando assim uma unidade.
Este algoritmo depois de calcular n de centenas ou dezenas usa essas mesmas para subtrair esse valor 
ao numero original para não acontecer isto :
Exemplo com o numero 125:
n centenas: 1
n dezenas: 12
n unidades: 125
com a subtração:
n centenas: 1
n dezenas: 2 
n unidades: 5*/
char *int_to_char(const int num){
    char *res = malloc(sizeof(char) * 3);
    int centenas = ( num >= 100) ? num / 100 : 0;
    int dezenas = ( num >= 10) ? num / 10 - centenas * 10 : 0;
    int unidades = ( num >= 1) ? num - centenas * 100 - dezenas * 10 : 0;
    snprintf(res, sizeof(res), "%d%d%d", centenas, dezenas, unidades);
    return res;
}