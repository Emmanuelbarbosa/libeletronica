#ifndef CIRCUITOSERIE_H
#define CIRCUITOSERIE_H
#include "libs/circuito.h"

class CircuitoSerie : public Circuito
{
public:
    CircuitoSerie();
    void appendCircuitoParalelo(const QList<Componente> &t);
};

#endif // CIRCUITOSERIE_H
