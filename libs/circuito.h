#ifndef CIRCUITO_H
#define CIRCUITO_H

#include <QList>
#include "libs/componente.h"

class Circuito : public QList<Componente>, public Componente
{
public:
    Circuito();
    void appendMalha(Circuito Comp);
};

#endif // CIRCUITO_H
