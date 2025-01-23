#include "candidato.h";
#include <stdio.h>

tCandidato CriaCandidato(char *nome, char *partido, char cargo, int id)
{
  tCandidato candidato;
  candidato.nome = nome;
  candidato.partido = partido;
  candidato.cargo = cargo;
  candidato.id = id;
  candidato.votos = 0;
  return candidato;
};

tCandidato LeCandidato()
{
  char nome[50], partido[50], cargo;
  int id;
  tCandidato candidato;

  scanf("%s,%s,%c,%d", nome, partido, &cargo, &id);

  return CriaCandidato(nome, partido, cargo, id);
};

int VerificaIdCandidato(tCandidato candidato, int id)
{
  return candidato.id == id;
};

int EhMesmoCandidato(tCandidato candidato1, tCandidato candidato2)
{
  return candidato1.id == candidato2.id;
};

char ObtemCargo(tCandidato candidato)
{
  return candidato.cargo;
};

tCandidato IncrementaVotoCandidato(tCandidato candidato)
{
  candidato.votos++;
  return candidato;
};

int ObtemVotos(tCandidato candidato)
{
  return candidato.votos;
};

float CalculaPercentualVotos(tCandidato candidato, int totalVotos)
{
  return 100 * candidato.votos / totalVotos;
};

void ImprimeCandidato(tCandidato candidato, float percentualVotos)
{
  printf("%s (%s), %d voto(s), %.2f%%", candidato.nome, candidato.partido, candidato.votos, percentualVotos);
};
