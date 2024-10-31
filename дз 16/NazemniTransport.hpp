//
//  NazemniTransport.hpp
//  дз 16
//
//  Created by Егор Джемлиханов on 28.10.2024.
//

#pragma once
#include "Transport.hpp"

using namespace std;

class NazemniTransport : public Transport
{
protected:
    int kolesa;
    string vidPoizda;

public:
    NazemniTransport(string n, double s, int c, int w, string vp)
        : Transport(n, s, c), kolesa(w), vidPoizda(vp) {}

    void Output() const
    {
        Transport::Output();
        cout << "Колеса: " << kolesa << "\nвид поизда: " << vidPoizda << endl;
    }
};

class Mashina : public NazemniTransport
{
private:
    string vidMotora;

public:
    Mashina(string n, double s, int c, int w, string vp, string vm)
    : NazemniTransport(n, s, c, w, vp), vidMotora(vm) {}

    void Output() const
    {
        NazemniTransport::Output();
        cout << "тип мотора: " << vidMotora << endl;
    }
};

class SvinaiaTiaga : public NazemniTransport
{
private:
    string vidGivotnogo;

public:
    SvinaiaTiaga(string n, double s, int c, int w, string vp, string vg)
        : NazemniTransport(n, s, c, w, vp), vidGivotnogo(vg) {}

    void Output() const
    {
        NazemniTransport::Output();
        cout << "категория животных: " << vidGivotnogo << endl;
    }
};

class Geleznodorognii : public NazemniTransport
{
private:
    int nomerVagona;

public:
    Geleznodorognii(string n, double s, int c, int w, string vp, int nv)
        : NazemniTransport(n, s, c, w, vp), nomerVagona(nv) {}

    void Output() const
    {
        NazemniTransport::Output();
        cout << "Количество вагонов: " << nomerVagona << endl;
    }
};
