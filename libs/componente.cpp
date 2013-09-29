#include "componente.h"

void Componente::setResistencia(float novo_valor)
{
    this->resistencia = novo_valor;
}

float Componente::getResistencia()
{
    return this->resistencia;
}

void Componente::setDDP(float novo_valor){
    this->ddp = novo_valor;
}

float Componente::getDDP() {
    return this->ddp;
}

void Componente::setCorrente(float novo_valor)
{
    this->corrente = novo_valor;
}

float Componente::getCorrente() {
    return this->corrente;
}
