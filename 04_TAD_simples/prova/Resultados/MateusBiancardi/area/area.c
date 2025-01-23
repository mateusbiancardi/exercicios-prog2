#include "area.h"
#include <stdio.h>
#include <string.h>

Area lerArea()
{
    Area a;
    scanf(" %[^\n]", a.nome);
    scanf("%s", a.id);
    scanf("%d", &a.capacidade);
    return a;
}

void imprimeArea(Area a)
{
    printf("Nome: %s\n", a.nome);
    printf("Id: %s\n", a.id);
    printf("Capacidade: %d convidado(s)\n", a.capacidade);
}

int comparaArea(Area a1, Area a2)
{
    if (strcmp(a1.id, a2.id) == 0)
    {
        return 1;
    }
    return 0;
};

int verificaIdArea(Area a, char *id)
{
    if (strcmp(a.id, id) == 0)
    {
        return 1;
    }
    return 0;
};

int getCapacidadeArea(Area a)
{
    return a.capacidade;
};