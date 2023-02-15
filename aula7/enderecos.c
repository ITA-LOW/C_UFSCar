#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    char c;
    int i;
    struct enderecos
    {
        int x, y;
    } ponto;
    int v[4];

    printf("sizeof(char) = %d\n", sizeof(char));
    printf("sizeof(int) = %d\n", sizeof(int));
    printf("sizeof(long) = %d\n", sizeof(long));
    printf("sizeof(long long) = %d\n", sizeof(long long));
    printf("sizeof(float) = %d\n", sizeof(float));
    printf("sizeof(double) = %d\n", sizeof(double));
    printf("sizeof(char *) = %d\n", sizeof(char *));
    printf("sizeof(int *) = %d\n", sizeof(int *));
    printf("sizeof(double *) = %d\n", sizeof(double *));

    printf("endereco de c = %p\n", &c);
    printf("endereco de i = %p\n", &i);
    printf("endereco de ponto = %p\n", &ponto);
    printf("endereco de ponto.x = %p\n", &ponto.x);
    printf("endereco de ponto.y = %p\n", &ponto.y);
    printf("endereco de v = %p\n", &v);
    printf("endereco de v[0] = %p\n", &v[0]);
    printf("endereco de v[1] = %p\n", &v[1]);
    printf("endereco de v[2] = %p\n", &v[2]);
    printf("endereco de v[3] = %p\n", &v[3]);

}