#include "resistor.h"

Resistor::Resistor(){
    this->valor = 0;
}

Resistor::Resistor(float resistencia_inicial)
{
    this->valor = resistencia_inicial;
}

void Resistor::setResistencia(float novo_valor)
{
    this->valor = novo_valor;
}

float Resistor::getResistencia()
{
    return this->valor;
}

Resistor Resistor::operator+ (Resistor r2)
{
    Resistor resistorToReturn(this->valor + r2.getResistencia());
    return resistorToReturn;
}
