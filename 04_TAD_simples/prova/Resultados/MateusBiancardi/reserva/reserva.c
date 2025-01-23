#include "reserva.h"
#include <stdio.h>

Reserva criaReserva(Morador morRes, Area aRes, Data dRes, int qtdConvidados) {
    Reserva r;
    r.morador = morRes;
    r.area = aRes;
    r.data = dRes;
    r.qtdConvidados = qtdConvidados;
    return r;
};

int verificaSolicitacaoReserva(Reserva *agendaReservas, int nRes, Morador morRes, Area aRes, Data dRes, int qtdConvidados) {
    if (calculaIdadeMorador(morRes, dRes) < 18) { //Verifica se é maior de idade
        return 0;
    }
    if (qtdConvidados > getCapacidadeArea(aRes)) { //Verifica se a quantidade de convidados ultrapassa a capacidade
        return 0;
    }
    for (int i = 0; i < nRes; i++) { //Verifica se o morador já reservou uma área no dia
        if (comparaData(agendaReservas[i].data, dRes) == 1 && comparaMorador(agendaReservas[i].morador, morRes) == 1) {
            return 0;
        }
    }
    for (int i = 0; i < nRes; i++) { //Verifica se a área já está reservada no dia
        if (comparaData(agendaReservas[i].data, dRes) == 1 && comparaArea(agendaReservas[i].area, aRes) == 1) {
            return 0;
        }
    }

    return 1;
}; 

void imprimeReserva(Reserva r) {
    printf("--------- RESERVA -----------\n");
    imprimeMorador(r.morador);
    printf("\n");
    imprimeArea(r.area);
    printf("\n");
    printf ("Quantidade de convidados: %d\n", r.qtdConvidados);
};