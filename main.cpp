#include <iostream>
#include "libs/resistor.h"
#include "libs/circuitoserie.h"
#include "libs/circuitoparalelo.h"
#include "libs/fonte.h"
#include <QList>

using namespace std;

int main(int argc, char *argv[])
{

    CircuitoSerie D3;
    D3.append(Resistor(3));
    D3.append(Fonte(10));

    CircuitoParalelo D2;
    D2.append(Resistor(13));
    D2.appendCircuitoSerie(D3);

    CircuitoSerie D1;
    D1.append(Fonte(20));
    D1.appendCircuitoParalelo(D2);

    cout << D1.count();
    cout << "\n";

    return 0;
}

