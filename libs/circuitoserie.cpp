#include "circuitoserie.h"

CircuitoSerie::CircuitoSerie()
{
}

void CircuitoSerie::appendCircuitoParalelo(const QList<Componente> &t)
{
    this->append(t);
}
