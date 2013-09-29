#ifndef RESISTOR_H
#define RESISTOR_H
#include "libs/componente.h"

class Resistor : public Componente
{
public:
    Resistor();
    Resistor(float resistencia_inicial);

    Resistor operator+ (Resistor r2);
    Resistor operator|| (Resistor r2);
};

#endif // RESISTOR_H
