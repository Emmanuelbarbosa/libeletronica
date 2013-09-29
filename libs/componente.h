#ifndef COMPONENTE_H
#define COMPONENTE_H

class Componente
{
public:

    void setResistencia(float novo_valor);
    float getResistencia();

    void setDDP(float novo_valor);
    float getDDP();

    void setCorrente(float novo_valor);
    float getCorrente();

private:
    float ddp, corrente, resistencia;
};

#endif // COMPONENTE_H
