#ifndef CIRCUITOPARALELO_H
#define CIRCUITOPARALELO_H
#include "libs/circuito.h"

class CircuitoParalelo : public Circuito
{
public:
    CircuitoParalelo();
    void appendCircuitoSerie(const QList<Componente> &t);
};

#endif // CIRCUITOPARALELO_H
