#include <stdio.h>
#include <stdlib.h>//malloc está nessa lib

int main(int argc, char *argv[])
{
  /*   char *p; // declara o apontador
    p = malloc(1); // aloca um byte para o endereço para onde o apontador aponta
    scanf("%c",p); //lê um valor e salva nesse endereço
    printf("%c",*p); // mostra o valor que está guardado nesse endereço
    printf("%c",p); // mostra o endereço onde o valor foi guardado
    free(*p);
    return 0; */


typedef struct alocacao
{
    int dia, mes, ano;
}Data;

void *mallocSafe(unsigned nbytes);
{
    void *p;
    p = malloc(nbytes);
    printf("endereco do primeiro byte do bloco = %p\n", p);
    if (p == NULL)
    {
        printf("Deu ruim, malloc devolveu NULL\n");
        exit(EXIT_FAILURE);
    }
    return p;
}

Data *d;
d = malloc(sizeof(*d)); // poderia ser também d = malloc(sizeof(Data));
d->dia = 31;
(*d).mes = 12;
d -> ano = 2019;
printf("dia = %d\nmes = %d\nano = %d\n", (*d).dia, d->mes, (*d).ano);
/* free(d);
d = NULL;
printf("dia = %d\nmes = %d\nano = %d\n", (*d).dia, d->mes, (*d).ano);
return 0; */

unsigned long long n;
int *v;
printf("sizeof(unsigned long long) = %llu\n", sizeof(n));
scanf("%llu", &n); // testar com 10^9
v = mallocSafe(n * sizeof(int));

int i;
for (i = 0; i < n; i++)
    v[i] = i;
printf("v[%llu] = %d\n", n - 1, v[n - 1]);
//return 0;

free(v);
v = NULL;
printf("v[%llu] = %d\n", n - 1, v[n - 1]);
return 0;
}

