#ifndef CIRCUITO_H
#define CIRCUITO_H

#include <QList>
#include "libs/componente.h"

class Circuito : public QList<Componente>
{
public:
    Circuito();
    void add(Componente Comp);
};

#endif // CIRCUITO_H
