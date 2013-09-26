#include <iostream>
#include "resistor.h"
using namespace std;

int main(int argc, char *argv[])
{
    Resistor R1(2);
    Resistor R2(3);
    Resistor Resultado;

    Resultado = R1 + R2 + Resistor(2);

    cout << "Resistencia total da " << Resultado.getResistencia();
    cout << "\n";

    return 0;
}
