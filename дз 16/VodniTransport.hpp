//
//  VodniTransport.hpp
//  дз 16
//
//  Created by Егор Джемлиханов on 28.10.2024.
//

#pragma once
#include "Transport.hpp"

using namespace std;

class VodniTransport : public Transport
{
protected:
    double smeshenie;
    double poleznaianagruzka;

public:
    VodniTransport(string n, double s, int c, double d, double p)
        : Transport(n, s, c), smeshenie(d), poleznaianagruzka(p) {}

    void Output() const
    {
        Transport::Output();
        cout << "Смещение: " << smeshenie << "\nПолезная нагрузка: " << poleznaianagruzka << endl;
    }
};

class Lainer : public VodniTransport
{
private:
    string vidTopleva;

public:
    Lainer(string n, double s, int c, double d, double p, string vt)
        : VodniTransport(n, s, c, d, p), vidTopleva(vt) {}

    void Output() const
    {
        VodniTransport::Output();
        cout << "вид топлива: " << vidTopleva << endl;
    }
};

class Lodka : public VodniTransport
{
private:
    string material;

public:
    Lodka(string n, double s, int c, double d, double p, string m)
        : VodniTransport(n, s, c, d, p), material(m) {}

    void Output() const
    {
        VodniTransport::Output();
        cout << "Материал: " << material << endl;
    }
};

class Gidrozikal : public VodniTransport
{
private:
    int kolichestvoKubov;

public:
    Gidrozikal(string n, double s, int c, double d, double p, int kk)
        : VodniTransport(n, s, c, d, p), kolichestvoKubov(kk) {}

    void Output() const
    {
        VodniTransport::Output();
        cout << "Количество кубов: " << kolichestvoKubov << endl;
    }
};
