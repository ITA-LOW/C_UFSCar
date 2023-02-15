#include <stdio.h>
#include <stdlib.h>


//argc -> contador de argumento, um dos argumento é o próprio
//nome do arquivo *printf("Parametros incorretos. Ex.: \\entrada 15\n");*

//argv[] -> é um vetor de ponteiros de char, em cada posição
//dele vai estar uma string dos argumentos

//atoi -> converte caracteres ascii para inteiros
int main(int argc, char *argv[])
{
    int n;
    if (argc != 3)
    {
        printf("Parametros incorretos. Ex.: \\entrada 1 2\n");
        return 0;
    }
    printf("%s\n", argv[0]);
    n = atoi(argv[1]);
    printf("%d\n%d\n", n, (n + 1));

    return 0;
}