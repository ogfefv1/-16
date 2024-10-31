//
//  VozdushniTransport.hpp
//  дз 16
//
//  Created by Егор Джемлиханов on 28.10.2024.
//

#pragma once
#include "Transport.hpp"

using namespace std;

class VozdushniTransport : public Transport
{
protected:
    double maksimalnaiaVisota;

public:
    VozdushniTransport(string n, double s, int c, double mv)
        : Transport(n, s, c), maksimalnaiaVisota(mv) {}

    void Output() const
    {
        Transport::Output();
        cout << "максимальная высота: " << maksimalnaiaVisota << endl;
    }
};

class Samoliot : public VozdushniTransport
{
private:
    int kolichestvoMotorov;

public:
    Samoliot(string n, double s, int c, double mv, int km)
        : VozdushniTransport(n, s, c, mv), kolichestvoMotorov(km) {}

    void Output() const
    {
        VozdushniTransport::Output();
        cout << "Количество моторов:: " << kolichestvoMotorov << endl;
    }
};

class Vertolot : public VozdushniTransport
{
private:
    double DlinaPropellera;

public:
    Vertolot(string n, double s, int c, double mv, double dp)
        : VozdushniTransport(n, s, c, mv), DlinaPropellera(dp) {}

    void Output() const
    {
        VozdushniTransport::Output();
        cout << "Длина пропеллеров: " << DlinaPropellera << " метров" << endl;
    }
};

class Deregabl : public VozdushniTransport
{
private:
    double obemTopleva;

public:
    Deregabl(string n, double s, int c, double mv, double ot)
    : VozdushniTransport(n, s, c, mv), obemTopleva(ot) {}

    void Output() const
    {
        VozdushniTransport::Output();
        cout << "Объем топлева: " << obemTopleva << " кубические метры" << endl;
    }
};
