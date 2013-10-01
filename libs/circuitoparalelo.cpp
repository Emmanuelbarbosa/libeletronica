#include "circuitoparalelo.h"

CircuitoParalelo::CircuitoParalelo()
{
}

void CircuitoParalelo::appendCircuitoSerie(const QList<Componente> &t)
{
    this->append(t);
};
