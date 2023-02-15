#include <stdio.h>
#include <stdlib.h>

void trocaErrada(int i, int j) //essa só usa variáveis locais
{
    int aux;
    aux = i;
    i = j;
    j = aux;
}

void trocaCerta(int *pi, int *pj) //usa endereços de memória
{
    int aux;
    aux = *pi;
    *pi = *pj;
    *pj = aux;
}

int main(int argcm, char *argv[])
{
    char *p1;
    int *p2, i;

    p1 = NULL;
    p2 = &i;

    int a = 2;
    int b = 3;
    int c;
    int *p;
    int *q;
    p = &a;
    q = &b;
    c = *p + *q;

    printf("%d\n", c);

    a = 1;
    b = 2;
    printf("a = %d, b = %d\n", a, b);
    trocaErrada(a,b);
    printf("a = %d, b = %d\n", a, b);
    trocaCerta(&a,&b);
    printf("a = %d, b = %d\n", a, b);

    return 0;
}