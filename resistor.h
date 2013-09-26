#ifndef RESISTOR_H
#define RESISTOR_H

class Resistor
{
public:
    Resistor();
    Resistor(float resistencia_inicial);

    void setResistencia(float novo_valor);
    float getResistencia();

    Resistor operator+(Resistor r2);
private:
    float valor;
};

#endif // RESISTOR_H
