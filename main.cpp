#include <iostream>
#include "libs/resistor.h"
#include "libs/circuitoserie.h"
#include "libs/circuitoparalelo.h"
#include "libs/fonte.h"
#include <QList>

using namespace std;

int main(int argc, char *argv[])
{
    CircuitoSerie malha1;
    Resistor R1(6);
    Resistor R2(6);
    Fonte E1(12);
    malha1 << R1 << R2 << E1;

    CircuitoParalelo malha2;
    Resistor R3(3);
    Resistor R4(3);
    malha2 << R3 << R4;

    cout << malha1.count();

    Resistor Resultado;
    Resultado = R1 || R2;

    cout << "Resistencia total da " << Resultado.getResistencia();
    cout << "\n";

    return 0;
}
