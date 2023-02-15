#include <stdio.h>
#include <stdlib.h>

//sintaxe de uma struct
int main(int argc, char argv[])
{
    //struct estruturas
    //{
    //    int dia;
    //    int mes;
    //    int ano;
    //}aniversario;//nome da variável struct

    //aniversario.dia = 20;
    //aniversario.mes = 10;
    //aniversario.ano = 2010;
    //printf("aniversario: %d/%d/%d", aniversario.dia, aniversario.mes, aniversario.ano);

    typedef struct data
    {
        int dia;
        int mes;
        int ano;
    }Data;



    Data aniversario;//como se instanciasse aniversario em Data
    /*
    aniversario.dia = 20;
    aniversario.mes = 10;
    aniversario.ano = 2010;
    printf("aniversario: %d/%d/%d", aniversario.dia, aniversario.mes, aniversario.ano);
     */
    Data *p;
    p = &aniversario;
    (*p).dia = 10;//essa sintaxe
    printf("%d\n", (*p).dia);
    p->dia = 15;//equivale a essa sintaxe
    printf("%d\n", p->dia);

    return 0;
}