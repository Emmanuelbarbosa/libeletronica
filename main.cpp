#include <iostream>
#include "libs/resistor.h"
using namespace std;

int main(int argc, char *argv[])
{
    Resistor R1(6);
    Resistor R2(6);
    Resistor Resultado;

    Resultado = R1 || R2;

    cout << "Resistencia total da " << Resultado.getResistencia();
    cout << "\n";

    return 0;
}
