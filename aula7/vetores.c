#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int v[10];
    int *p;
    p = &v[0];
    printf("%p\n", v);
    printf("%p\n", p);

    int i;
    for (i = 0; i < 10; i++)
    {
        v[i] = i;
    }

    printf("%d\n", v[3]);
    printf("%d\n", *(v + 3));// pega o endereço do v e avance 3 posições
    printf("%d\n", p[3]);
    printf("%d\n", *(p + 3));

    return 0;
}