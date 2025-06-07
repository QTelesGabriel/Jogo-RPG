#ifndef JOGO_H
#define JOGO_H

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <unistd.h>
#include "funcoes_auxiliares.h"

void jogo(const char* nome, int vida, int atributo_principal, int forca, int constituicao, int destreza, int inteligencia, int profissao, int alinhamento);

void jogo_facil(int escolha_mapa, const char* nome, int vida, int atributo_principal, int forca, int constituicao, int destreza, int inteligencia, int profissao, int alinhamento, const char* atributo_principal_escrito, const char* profissao_escrito, const char* alinhamento_escrito);

void jogo_medio(int escolha_mapa, const char* nome, int vida, int atributo_principal, int forca, int constituicao, int destreza, int inteligencia, int profissao, int alinhamento, const char* atributo_principal_escrito, const char* profissao_escrito, const char* alinhamento_escrito);

void jogo_dificil(int escolha_mapa, const char* nome, int vida, int atributo_principal, int forca, int constituicao, int destreza, int inteligencia, int profissao, int alinhamento, const char* atributo_principal_escrito, const char* profissao_escrito, const char* alinhamento_escrito);

void mapas_faceis(char mapa_1[][21], int escolha_mapa);

void mapas_medios(char mapa_2[][31], int escolha_mapa);

void mapas_dificeis(char mapa_3[][51], int escolha_mapa);

void jokenpo(int alinhamento, const char* nome, int *vida);

void charada(int vida);

#endif